// https://practice.geeksforgeeks.org/problems/check-for-bst/1


class Solution
{
    public:
    
    bool check(Node* root,int min,int max){
        if(root==NULL){
            return true;
        }
        if(root->data<=min||root->data>=max){
            return false;
        }
        return check(root->left,min,root->data)&& check(root->right,root->data,max);
    }
    bool isBST(Node* root) 
    {
        return check(root,INT_MIN,INT_MAX);
    }
};
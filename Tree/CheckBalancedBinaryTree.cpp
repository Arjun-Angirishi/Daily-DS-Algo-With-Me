// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{
    public:
    int solve(Node* root){
        if(root==NULL){
            return 0;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        if(left==-1||right==-1){
            return -1;
        }
        if(abs(left-right)>1){
            return -1;
        }
        return 1+max(left,right);
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(solve(root)==-1){
            return false;
        }
        else return true;
    }
};
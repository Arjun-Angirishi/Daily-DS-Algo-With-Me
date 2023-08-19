// https://practice.geeksforgeeks.org/problems/symmetric-tree/1

class Solution{
    public:
    bool solve(Node* left,Node* right){
        if(left==NULL||right==NULL){
            return left==right;
        }
        return (left->data==right->data)&&solve(left->left,right->right)&&solve(left->right,right->left);
    }
    
    bool isSymmetric(struct Node* root)
    {
        if(root==NULL){
            return true;
        }
	    return solve(root->left,root->right);
    }
};
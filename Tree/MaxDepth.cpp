// https://practice.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1

class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(root==NULL){
            return 0;
        }
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        return 1+max(left,right);
    }
};
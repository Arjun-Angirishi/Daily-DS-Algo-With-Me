// https://practice.geeksforgeeks.org/problems/minimum-depth-of-a-binary-tree/1?page=3&category[]=Tree&sortBy=submissions


class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        if(root==NULL){
            return 0;
        }
        int ans=INT_MAX-1;
        if(root->left){
            ans=min(minDepth(root->left),ans);
        }
        if(root->right){
            ans=min(minDepth(root->right),ans);
        }
        ans++;
        return ans==INT_MAX?1:ans;
    }
};
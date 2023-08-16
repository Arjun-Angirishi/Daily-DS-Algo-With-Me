//https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1
 

class Solution {
  public:
    int solve(Node* root,int& maxi){
        if(root==NULL){
            return 0;
        }
        int lsum=max(0,solve(root->left,maxi));
        int rsum=max(0,solve(root->right,maxi));
        maxi=max(maxi,lsum+rsum+root->data);
        return root->data+max(lsum,rsum);
    }
    //Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root)
    {
        int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
    }
};
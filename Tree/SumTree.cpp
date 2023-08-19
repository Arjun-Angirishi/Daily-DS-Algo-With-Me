// https://practice.geeksforgeeks.org/problems/sum-tree/1?page=1&category[]=Tree&sortBy=submissions


class Solution
{
    public:
    int solve(Node* root){
        if(root==NULL){
            return 0;
        }
        int lsum=solve(root->left);
        int rsum=solve(root->right);
        if(root->left||root->right){
            if(lsum+rsum!=root->data||lsum==-1||rsum==-1){
                return -1;
            }
        }
        return lsum+rsum+root->data;
        
        
    }
    bool isSumTree(Node* root)
    {
         long long sum=0;
         int ans= solve(root);
         return ans==-1?false:true;
    }
};
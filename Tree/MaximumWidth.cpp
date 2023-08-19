// https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1
 

class Solution {
  public:
    
    int getMaxWidth(Node* root) {
        if(root==NULL){
            return 0;
        }
        queue<pair<Node*,int>> q;
        q.push({root,0});
        int ans=INT_MIN;
        while(!q.empty()){
            int sz=q.size();
            int mmin=q.front().second;
            int first,last;
            for(int i=0;i<sz;i++){
                auto p=q.front().first;
                int curr=q.front().second-mmin;
                q.pop();
                // if(i==0)first=curr;
                // if(i==sz-1)last=curr;
                if(p->left!=NULL){
                    q.push({p->left,2*curr+1});
                }
                if(p->right!=NULL){
                    q.push({p->right,2*curr+2});
                }
            }
            ans=max(ans,sz);
        }
        return ans;
    }
};
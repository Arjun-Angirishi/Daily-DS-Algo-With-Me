// https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<Node*,pair<int,int>>> q;
        map<int, map<int, vector<int>>> m;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int x=p.second.first;
            int y=p.second.second;
            if(p.first->left!=NULL){
                q.push({p.first->left,{x+1,y-1}});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right,{x+1,y+1}});
            }
            m[y][x].push_back(p.first->data);
        }
        for(auto p:m){
            for(auto q:p.second){
                for(auto x:q.second){
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};
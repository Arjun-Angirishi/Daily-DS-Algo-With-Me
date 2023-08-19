// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<Node*, int>> q;
        q.push({root,0});
        map<int,int> m;
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            if(m.find(p.second)==m.end()){
                m.insert({p.second,p.first->data});
            }
            if(p.first->left!=NULL){
                q.push({p.first->left,p.second-1});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right,p.second+1});
            }
        }
        for(auto p:m){
            ans.push_back(p.second);
        }
        return ans;
    }

};
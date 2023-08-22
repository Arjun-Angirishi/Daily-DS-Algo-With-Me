//  https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1


class Solution {
  public:
  
    void dfs(int root,vector<int> adj[],vector<int> &vis,vector<int> &ans){
        vis[root]=1;
        ans.push_back(root);
        for(auto p:adj[root]){
            if(!vis[p]){
                dfs(p,adj,vis,ans);
            }
        }
        return ;
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> ans;
        dfs(0,adj,vis,ans);
        return ans;
    }
};
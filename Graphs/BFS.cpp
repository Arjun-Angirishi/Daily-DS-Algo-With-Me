// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        queue<int> q;
        q.push(0);
        vector<int> vis(V,0);
        vis[0]=1;
        while(!q.empty()){
            int temp=q.front();
            ans.push_back(temp);
            q.pop();
            for(auto p:adj[temp]){
                if(!vis[p]){
                    vis[p]=1;
                    q.push(p);
                }
            }
        }
        return ans;
        
        
    }
};
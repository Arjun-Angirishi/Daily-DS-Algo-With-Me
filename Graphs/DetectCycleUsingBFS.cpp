// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
    bool detect(int i,vector<int> adj[],vector<int> &vis){
        vis[i]=1;
        queue<pair<int,int>> q;
        q.push({i,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto p:adj[node]){
                if(!vis[p]){
                    vis[p]=1;
                    q.push({p,node});
                }else if(p!=parent){
                        return true;
                    
                }
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                           if(detect(i,adj,vis)){
                return true;
            }
            }
 
        }
        return false;
    }
};
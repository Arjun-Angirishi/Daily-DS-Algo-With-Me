// https://practice.geeksforgeeks.org/problems/number-of-provinces/1

class Solution {
  public:
    void dfs(int i,vector<int> adjLs[],vector<int> &vis){
        vis[i]=1;
        for(auto p:adjLs[i]){
            if(!vis[p]){
                dfs(p,adjLs,vis);
            }
        }
        return ;
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        int cnt=0;
        vector<int> adjLs[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]){
                    adjLs[i].push_back(j);
                }
            }
        }
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adjLs,vis);
                cnt++;
            }
        }
        return cnt;
        
    }
};
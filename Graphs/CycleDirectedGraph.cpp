// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1


bool dfs(int i,vector<int> adj[],vector<int>&vis,vector<int> &path){
        path[i]=1;
        vis[i]=1;
        for(auto p:adj[i]){
         if(!vis[p]){
             if(dfs(p,adj,vis,path)){
                 return true;
             }
         }else {
            if(path[p]==1){
                return true;
            }    
         }   
        }
        path[i]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> path(V,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,path)){
                    return true;
                }
            }
        }
        return false;
    }
// https://practice.geeksforgeeks.org/problems/bipartite-graph/1

class Solution {
public:

    bool dfs(int i,vector<int> &vis,vector<int>adj[],int color){
        vis[i]=color;
        for(auto p:adj[i]){
            if(vis[p]==-1){
                if(!dfs(p,vis,adj,!color)){
                    return false;
                }
            }
            else{
                if(vis[p]==color){
                    return false;
                }
            }
        }
        return true;
    }
    
    
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> vis(V,-1);
	    for(int i=0;i<V;i++){
	        if(vis[i]==-1){
	            if(dfs(i,vis,adj,0)==false)
	            return false;
	        }
	    }
	    return true;
	}

};
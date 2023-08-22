// https://practice.geeksforgeeks.org/problems/topological-sort/1


class Solution
{
	public:
	
	void dfs(int i,vector<int> &vis,stack<int> &s,vector<int> adj[]){
	    vis[i]=1;
	    for(auto p:adj[i]){
	        if(!vis[p]){
	            dfs(p,vis,s,adj);
	        }
	    }
	    s.push(i);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V,0);
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,s,adj);
	        }
	    }
	    vector<int> ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};
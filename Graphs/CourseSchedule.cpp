// https://practice.geeksforgeeks.org/problems/course-schedule/1

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
       vector<int> Indegree(n,0);
	    for(auto p:prerequisites){
	        Indegree[p[0]]++;
	    }
	    vector<int> AdjLs[n];
	    queue<int> q;
	    for(auto p:prerequisites){
	        AdjLs[p[1]].push_back(p[0]);
	    }
	    for(int i=0;i<n;i++){
	        if(Indegree[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int> ans;
	    while(!q.empty()){
	        int Node=q.front();
	        q.pop();
	        ans.push_back(Node);
	        for(auto p:AdjLs[Node]){
	            Indegree[p]--;
	            if(Indegree[p]==0){
	                q.push(p);
	            }
	        }
	    }
	    if(ans.size()!=n){
	        return {};
	    }return ans;
    }
};
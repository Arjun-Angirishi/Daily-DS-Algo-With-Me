// https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1


class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    vector<int> Indegree(N,0);
	    for(auto p:prerequisites){
	        Indegree[p.second]++;
	    }
	    vector<int> AdjLs[N];
	    queue<int> q;
	    for(auto p:prerequisites){
	        AdjLs[p.first].push_back(p.second);
	    }
	    for(int i=0;i<N;i++){
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
	    if(ans.size()!=N){
	        return false;
	    }return true;
	}
};
// https://practice.geeksforgeeks.org/problems/alien-dictionary/1

class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        vector<int> Indegree(K,0);
        vector<int> AdjLs[K];
	    for(int i=0;i<N-1;i++){
	        string s1=dict[i];
	        string s2=dict[i+1];
	        int len=min(s1.length(),s2.length());
	        for(int j=0;j<len;j++){
	            if(s1[j]!=s2[j]){
	                Indegree[s2[j]-'a']++;
	                AdjLs[s1[j]-'a'].push_back(s2[j]-'a');
	                break;
	            }
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<K;i++){
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
	    string a;
        for(auto p:ans){
            a=a+(char)(p+'a');
        }
        return a;
    }
};
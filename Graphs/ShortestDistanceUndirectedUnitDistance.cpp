// https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        queue<pair<int,int>> q;
        vector<int> AdjLs[N];
        for(auto p:edges){
            AdjLs[p[1]].push_back(p[0]);
            AdjLs[p[0]].push_back(p[1]);
        }
        vector<int> dis(N,-1);
        q.push({src,0});
        dis[src]=0;
        while(!q.empty()){
            int Node=q.front().first;
            int dist=q.front().second;
            q.pop();
            for(auto p:AdjLs[Node]){
                if(dist+1<dis[p]||dis[p]==-1){
                    dis[p]=dist+1;
                    q.push({p,dist+1});
                }
            }
        }
        return dis;
    }
};
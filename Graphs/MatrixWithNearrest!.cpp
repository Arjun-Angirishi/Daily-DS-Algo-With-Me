//  https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1


class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{	int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> vis(n,vector<int> (m,0));
	    vector<vector<int>> copy=grid;
	    queue<pair<pair<int,int>,int>> q;

	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1){
	                copy[i][j]=0;
	                vis[i][j]=1;
	                q.push({{i,j},0});
	            }
	        }
	    }
	    while(!q.empty()){
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int step=q.front().second;
	        q.pop();
	        int delrow[]={0,1,0,-1};
	        int delcol[]={1,0,-1,0};
	        for(int i=0;i<4;i++){
	            int nrow=row+delrow[i];
	            int ncol=col+delcol[i];
	            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&!grid[nrow][ncol]){
	                vis[nrow][ncol]=1;
	                q.push({{nrow,ncol},step+1});
	                copy[nrow][ncol]=step+1;
	            }
	        }
	    }
	    return copy;
	}
};
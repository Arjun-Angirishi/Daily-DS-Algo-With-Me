// https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1

class Solution{
public:



    void dfs(int i,int j,vector<vector<char>> &mat,vector<vector<int>> &vis){
        vis[i][j]=1;
        int n=mat.size();
        int m=mat[0].size();
        int delrow[]={0,1,0,-1};
        int delcol[]={1,0,-1,0};
        for(int x=0;x<4;x++){
            int nrow=i+delrow[x];
            int ncol=j+delcol[x];
            if(nrow>=0&&nrow<n&&ncol<m&&ncol>=0&&!vis[nrow][ncol]&&mat[nrow][ncol]=='O'){
                dfs(nrow,ncol,mat,vis);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0||i==n-1||j==m-1){
                    if(mat[i][j]=='O'){
                            dfs(i,j,mat,vis);
                    }
                }
            }
        }
        vector<vector<char>> copy=mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='X')
                {
                    copy[i][j]='X';
                }else {
                    if(!vis[i][j]){
                        copy[i][j]='X';
                    }
                    else{
                        copy[i][j]='O';
                    }
                }
            }
        }
        return copy;
    }
};
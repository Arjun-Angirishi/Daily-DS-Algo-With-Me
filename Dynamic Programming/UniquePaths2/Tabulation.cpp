// https://practice.geeksforgeeks.org/problems/96161dfced02d544fc70c71d09b7a616fe726085/1


class Solution {
  public:
    int MOD=1000000007;
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        vector<vector<int>>dp(n,vector<int> (m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (grid[i][j]==0){
                    dp[i][j]=0;
                    continue;
                }
                
                if(i==0&&j==0){
                    dp[i][j]=1;
                    continue;
                }
                
                int up=0;
                int down=0;
                if(i>0)up=dp[i-1][j];
                if(j>0)down=dp[i][j-1];
                
                dp[i][j]=(up+down)%MOD;
            }
        }
        return dp[n-1][m-1];
    }
};
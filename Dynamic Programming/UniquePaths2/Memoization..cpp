// https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/


class Solution {
  public:
    int solve(int a,int b,vector<vector<int>> &dp,vector<vector<int>> &grid){
        int MOD=(int)1e9+7;
        if(a<0||b<0){
            return 0;
        }
        if(grid[a][b]==0){
            return 0;
        }
        if(a==0&&b==0){
            return 1;
        }

        if(dp[a][b]!=-1){
            return dp[a][b];
        }
        return dp[a][b]=(solve(a-1,b,dp,grid)+solve(a,b-1,dp,grid))%MOD;
    }
    
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        vector<vector<int>> dp (n,vector<int> (m,-1));
        return solve(n-1,m-1,dp,grid);
    }
};
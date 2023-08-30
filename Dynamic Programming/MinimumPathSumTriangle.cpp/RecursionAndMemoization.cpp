// https://practice.geeksforgeeks.org/problems/triangle-path-sum/1

class Solution {
  public:
    int solve(int i,int j,vector<vector<int>> &triangle,vector<vector<int>> &dp,int n){
        if(i==n-1){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int d=triangle[i][j]+solve(i+1,j,triangle,dp,n);
        int dg=triangle[i][j]+solve(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(d,dg);
        
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return solve(0,0,triangle,dp,n);
    }
};


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
        
        for(int j=0;j<n;j++){
         dp[n-1][j]=triangle[n-1][j];   
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            }

        }
        return dp[0][0];
    }
};
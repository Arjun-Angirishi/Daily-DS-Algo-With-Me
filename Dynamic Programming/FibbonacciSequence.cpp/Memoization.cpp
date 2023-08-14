 // https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

 class Solution {
  public:
  
    int nFibo(int n,vector<int> &dp){
        if(dp[n]!=-1){
            return dp[n];
        }
        int MOD= 1000000007;
        if(n==1||n==0){
            return n;
        }
        return dp[n]=(nFibo(n-1,dp)+nFibo(n-2,dp))%MOD;
    }
    
    int nthFibonacci(int n){
        vector<int> dp(n+1,-1);
        return nFibo(n,dp);
    }
};
// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

class Solution {
  public:
    
    int nthFibonacci(int n){
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        int MOD= 1000000007;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%MOD;
        }
        return dp[n]%MOD;
    }
};
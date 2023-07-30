//https://www.codingninjas.com/studio/problems/minimal-cost_8180930?leftPanelTab=1

int minimizeCost(int n, int k, vector<int> &height){
    vector<int> dp(n,-1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int ans=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
             ans=min(ans,dp[i-j]+abs(height[i]-height[i-j]));            
             }

        }
        dp[i]=ans;
    }
    return dp[n-1];
}
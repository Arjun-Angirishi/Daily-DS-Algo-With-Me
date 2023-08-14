// https://practice.geeksforgeeks.org/problems/geeks-training/1

class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        vector<vector<int>> dp(n,vector<int>(4,-1));
        dp[0][0]=max(points[0][1],points[0][2]);
        dp[0][1]=max(points[0][0],points[0][2]);
        dp[0][2]=max(points[0][1],points[0][0]);
        dp[0][3]=max(points[0][1],max(points[0][0],points[0][2]));
        for(int i=1;i<n;i++){
            for(int j=0;j<4;j++){
                int maxi=0;
                for(int k=0;k<3;k++){
                    if(j!=k){
                        maxi=max(points[i][k]+dp[i-1][k],maxi);
                    }
                }
                dp[i][j]=maxi;
            }
        }
        return dp[n-1][3];
    }
};
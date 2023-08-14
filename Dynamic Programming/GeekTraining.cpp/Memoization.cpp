// https://practice.geeksforgeeks.org/problems/geeks-training/1

class Solution {
  public:
  
    int solve(int day,int last,vector<vector<int>>& points,vector<vector<int>>& dp){
        if(day==0){
            int maxi=0;
            for(int i=0;i<3;i++){
                if(i!=last){
                    maxi=max(maxi,points[0][i]);
                }
            }
            return dp[0][last]=maxi;
        }
        if(dp[day][last]!=-1){
            return dp[day][last];
        }
        
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last){
                maxi=max(maxi,points[day][i]+solve(day-1,i,points,dp));
            }
        }
        
        return dp[day][last]=maxi;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return solve(n-1,3,points,dp);
    }
};
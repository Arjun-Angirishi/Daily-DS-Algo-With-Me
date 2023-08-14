// https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1


class Solution
{
    public:
    int solve(int a,int b,vector<vector<int>> &dp){
        if(a==0&&b==0){
            return 1;
        }
        if(a<0||b<0){
            return 0;
        }
        if(dp[a][b]!=-1){
            return dp[a][b];
        }
        int ans=solve(a-1,b,dp)+solve(a,b-1,dp);
        return dp[a][b]=ans;
    }
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a,vector<int> (b,-1));
        return solve(a-1,b-1,dp);
    }
};
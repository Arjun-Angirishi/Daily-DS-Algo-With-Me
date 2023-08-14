// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    
    int solve(int n,int arr[],vector<int> &dp){
        if(n==0){
            return arr[0];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int left;
        if(n-2<0){
            left=arr[n];
        }else {
            left=arr[n]+solve(n-2,arr,dp);
        }

        int right=solve(n-1,arr,dp);
        return dp[n]=max(left,right);
    }
    
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp1(n+1,-1);
        int ans1=solve(n-1,arr,dp1);
        return ans1;
    }
};
// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n,0);
        dp[0]=arr[0];
        for(int i=1;i<n;i++){
            int left,right;
            if(i-2<0){
                left=arr[i];
            }else {
                left=arr[i]+dp[i-2];
            }
            right=dp[i-1];
            dp[i]=max(left,right);
        }
        return dp[n-1];
    }
};
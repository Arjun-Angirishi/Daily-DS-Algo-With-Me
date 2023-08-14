// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        vector<int> dp(n+1,-1);
        int prev2=1;
        int prev=1;
        int MOD=1000000007;
        for(int i=2;i<=n;i++){
            int curr=(prev2+prev)%MOD;
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};
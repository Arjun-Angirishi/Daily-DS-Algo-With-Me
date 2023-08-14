// https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1

class Solution
{
    public:
    long long countWays(int n)
    {
        vector<long long> ans(n+1,0);
        ans[0]=1;
        int MOD=1000000007;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=3;j++){
                if(i-j>=0){
                    ans[i]=(ans[i]+ans[i-j])%MOD;
                }
            }
        }
        return ans[n];
        
    }
};
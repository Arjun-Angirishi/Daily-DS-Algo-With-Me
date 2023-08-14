// https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1

class Solution
{
    public:
    
    long long solve(int n,vector<long long> &ans){
        if(n==0||n==1){
            return ans[n]=1;
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        int MOD=1000000007;
        long long X=0;
        for(int i=1;i<=3;i++){
            if(n-i<0){
                continue;
            }
            X=(X+(solve(n-i,ans)%MOD))%MOD;
        }
        return ans[n]=X;
        
    }
    
    
    long long countWays(int n)
    {
        vector<long long> ans(n+1,-1);
        return solve(n,ans);
        
    }
};
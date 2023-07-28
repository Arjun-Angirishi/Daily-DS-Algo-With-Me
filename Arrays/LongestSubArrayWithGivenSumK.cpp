// https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map <int,int> u;
        long long sum=0;
        int ans=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                ans=max(ans,i+1);
            }
            if(u.find(sum-K)!=u.end()){
                    ans=max(ans,i-u[sum-K]);
                }
            if(u.find(sum)!=u.end()){
                continue;
            }else{
                u.insert({sum,i});
                
            }
        }
        return ans;
    } 

};
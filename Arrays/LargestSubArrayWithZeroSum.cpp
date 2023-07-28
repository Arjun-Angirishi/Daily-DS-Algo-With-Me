https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Arrays&sortBy=submissions


class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   int K=0;
        unordered_map <int,int> u;
        long long sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
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

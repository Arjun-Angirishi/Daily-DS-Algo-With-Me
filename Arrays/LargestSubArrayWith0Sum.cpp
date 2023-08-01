//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        vector<int> pre(n);
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                ans=i+1;
            }
            pre[i]=sum;
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(pre[i])==m.end()){
                m.insert({pre[i],i});
            }else{
                ans=max(ans,i-m[pre[i]]);
            }
        }
        return ans;
    }
};
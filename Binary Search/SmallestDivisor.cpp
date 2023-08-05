//https://practice.geeksforgeeks.org/problems/smallest-divisor/1

class Solution {
  public:
  
  
    bool check(vector<int> &nums,int K,int mid){
        long long x=0;
        for(auto p:nums){
            x+=ceil((double)p/(double)mid);
        }
        if(x>K){
            return false;
        }return true;
    }
    
    int smallestDivisor(vector<int>& nums, int K) {
        int st=1;
        int end=INT_MIN;
        for(auto p: nums){
            end=max(end,p);
        }
        while(st<=end){
            int mid=(st+end)/2;
            if(check(nums,K,mid)){
                end=mid-1;
            }else {
                st=mid+1;
            }
        }
        return st;
    }
};
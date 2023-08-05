// https://practice.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1

class Solution {
  public:
  
    int check(int M,int K,vector<int> &bloomDay,int mid){
        int N=bloomDay.size();
        int ans=0;
        int cnt=0;
        for(auto p:bloomDay){
            if(mid>=p){
                cnt++;
            }else {
                ans+=cnt/K;
                cnt=0;
            }
        }
        ans+=cnt/K;
        return ans;
    }
    
    int solve(int M, int K, vector<int> &bloomDay){
        int N =bloomDay.size();
        long long val=M*1LL*K;
        if(val>N){
            return -1; 
        }
        int st=INT_MAX;
        int end=INT_MIN;
        for(auto p:bloomDay){
            st=min(st,p);
            end=max(p,end);
        }
        int ans=-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(check(M,K,bloomDay,mid)>=M){
                ans=mid;
                end=mid-1;
            }else {
                st=mid+1;
            }
        }
        return ans;
    }
};
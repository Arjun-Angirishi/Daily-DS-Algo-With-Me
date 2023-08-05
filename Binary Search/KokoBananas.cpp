//https://practice.geeksforgeeks.org/problems/koko-eating-bananas/1


class Solution {
  public:
  
    bool Check(int N,vector<int>& piles,int H,int mid){
        int ans=0;
        for(int i=0;i<N;i++){
            ans+=ceil((double)piles[i]/(double)mid);
        }
        if(ans>H){
            return false;
        }
        return true;
    }
    
    
    int Solve(int N, vector<int>& piles, int H) {
        int st=1;
        int end=INT_MIN;
        for(int i=0;i<N;i++){
            end=max(end,piles[i]);
        }
        while(st<=end){
            int mid=(st+end)/2;
            if(Check(N,piles,H,mid)){
                end=mid-1;
            }else {
                st=mid+1;
            }
        }
        return st;
        
    }
};
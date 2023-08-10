//https://practice.geeksforgeeks.org/problems/f04fd67b26b4828b6180715d8b1700426b637247/1

class Solution {
  public:
  
    bool check(int arr[],int N,int K,long long mid){
        
        int cnt=0;
        long long curr=0;
        for(int i=0;i<N;i++){
            if(curr+arr[i]>mid){
                cnt++;
                curr=arr[i];
            }
            else curr+=arr[i];
        }
        cnt++;
        if(cnt<=K)return true;
        return false;
      
        
    }
    
    int splitArray(int arr[] ,int N, int K) {
        long long st=*max_element(arr,arr+N);
        long long end=0;
        for(int i=0;i<N;i++){
            end+=arr[i];
        }
        long long ans=INT_MAX;
        while(st<=end){
            long long mid=(st+end)/2;
            
            if(check(arr,N,K,mid)){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return st;
    }
};
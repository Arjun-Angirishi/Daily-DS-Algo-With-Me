// https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

class Solution
{
  public:
    bool check(int arr[],int n,int k,long long mid){
        
        int cnt=0;
        long long curr=0;
        for(int i=0;i<n;i++){
            if(curr+arr[i]>mid){
                cnt++;
                curr=arr[i];
            }
            else curr+=arr[i];
        }
        cnt++;
        if(cnt<=k)return true;
        return false;
      
        
    }
  
  
  
    long long minTime(int arr[], int n, int k)
    {
        long long st=*max_element(arr,arr+n);
        long long end=0;
        for(int i=0;i<n;i++){
            end+=arr[i];
        }
        long long ans=INT_MAX;
        while(st<=end){
            long long mid=(st+end)/2;
            
            if(check(arr,n,k,mid)){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return st;
    }
};
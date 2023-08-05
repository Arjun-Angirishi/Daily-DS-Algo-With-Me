//https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1


class Solution {
  public:
  
  
  bool check(int arr[],int N,int D,int mid){
      int cnt=0;
      int curr=0;
      for(int i=0;i<N;i++){
          curr+=arr[i];
          if(curr>mid){
              curr=arr[i];
              cnt++;
          }
      }
      cnt++;
      if(cnt>D){
          return false;
      }
      return true;
  }
    int leastWeightCapacity(int arr[], int N, int D) {
        int end=0;
        int st=INT_MIN;
        for(int i=0;i<N;i++){
            end+=arr[i];
            st=max(st,arr[i]);
        }
        while(st<=end){
            int mid=(st+end)/2;
            if(check(arr,N,D,mid)){
                end=mid-1;
            }else {
                st=mid+1;
            }
        }
        return st;
    }
};
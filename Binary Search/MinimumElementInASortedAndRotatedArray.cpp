//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution{
public:
    int findMin(int arr[], int n){
        int ans=INT_MAX;
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[st]<=arr[mid]){
                ans=min(ans,arr[st]);
                st=mid+1;
            }else {
                ans=min(ans,arr[mid]);
                end=mid-1;
            }
        }
        return ans;
    }
};
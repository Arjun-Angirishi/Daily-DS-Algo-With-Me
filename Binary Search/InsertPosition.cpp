//https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int st=0;
        int end=N-1;
        int mid;
        int ans=-1;
        while(st<=end){
            mid=(st+end)/2;
            if(Arr[mid]==k){
                return mid;
            }else if(Arr[mid]<k){
                st=mid+1;
                ans=mid;
                
            }else {
                end=mid-1;

            }
        }
        return ans+1;
    }
};
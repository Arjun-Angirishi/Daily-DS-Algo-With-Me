//https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int st=0;
        int end=n-1;
        int ans=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==0){
                ans=mid;
                end=mid-1;
            }else {
                st=mid+1;
            }
        }
        return n-ans;
    }
};
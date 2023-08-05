//  https://practice.geeksforgeeks.org/problems/peak-element/1

/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if(n==1){
           return 0;
       }
       if(arr[0]>=arr[1]){
           return 0;
       }
       if(arr[n-1]>=arr[n-2]){
           return n-1;
       }
       int st=1;
       int end=n-2;
       int mid=0;
       while(st<=end){
           int mid=(st+end)/2;
           if(arr[mid]>=arr[mid-1]&&arr[mid]>=arr[mid+1]){
               return mid;
           }else if(arr[mid]<arr[mid-1]){
               end=mid-1;
           }else st=mid+1;
       }
       return mid;
    }
};
// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?page=1&category[]=Binary%20Search&sortBy=submissions

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    {   
        int ans=-1;
        int st=0,end=N-1;
        int mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(arr[mid]==K){
                return 1;
            }
            else if(arr[mid]>K){
                end=mid-1;
            }else st=mid+1;
        }
        return ans;
       
    }
};
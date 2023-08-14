// https://practice.geeksforgeeks.org/problems/quick-sort/1

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
       if(low<high){
           int par=partition(arr,low,high);
           quickSort(arr,low,par-1);
           quickSort(arr,par+1,high);
       }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int piv=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=piv&&i<=high-1){
                i++;
            }
            while(arr[j]>piv&&j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[low],arr[j]);
        return j;

    }
};
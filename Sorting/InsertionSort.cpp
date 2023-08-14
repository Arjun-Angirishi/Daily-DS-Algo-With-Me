// https://practice.geeksforgeeks.org/problems/insertion-sort/1

class Solution
{
    public:
    void insert(int arr[], int i,int n)
    {
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
            insert(arr,i,n);
        }
    }
};
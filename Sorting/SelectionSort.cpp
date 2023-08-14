//https://practice.geeksforgeeks.org/problems/selection-sort/1

class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
        int mini=i;
    
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        return mini;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n;i++){
           int ind=select(arr,i,n);
           if(i!=ind){
           swap(arr[i],arr[ind]);               
           }

       }
    }
};
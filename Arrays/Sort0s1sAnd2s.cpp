// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low=0;
        int high=n-1;
        int mid=0;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[mid],a[low]);
                mid++;
                low++;
            }else if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }else mid++;
        }
    }
    
};
// https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        if(n==1){
            return true;
        }
        else {
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    return false;
                }
            }
                return true;
        }
    }
};
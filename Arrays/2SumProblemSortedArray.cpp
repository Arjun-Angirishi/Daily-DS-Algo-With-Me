// https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        int st=0;
        int end=n-1;
        int count=0;
        while(st<end){
            if(arr[st]+arr[end]==sum){
                count++;
                end--;
            }else if(arr[st]+arr[end]>sum){
                end--;
            }else st++;
        }
        return count>0?count:-1;
    
        
    }
};
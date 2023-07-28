// https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1?page=4&difficulty[]=0&category[]=Arrays&sortBy=submissions

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        int sum=0;
        for(int i=0;i<N;i++){
            while(arr[i]){
                sum+=arr[i]%10;
                arr[i]/=10;
            }
        }
        return (!(sum%3));
    }
};
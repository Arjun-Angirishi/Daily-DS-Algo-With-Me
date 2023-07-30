// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1


class Solution {
  public:
    int nthFibonacci(int n){
        int prev=1;
        int prev2=0;
        int curi=0;
        int MOD= 1000000007;
        for(int i=0;i<n-1;i++){
            curi=prev2+prev;
            prev2=prev%MOD;
            prev=curi%MOD;
        }
        return prev;
    }
};
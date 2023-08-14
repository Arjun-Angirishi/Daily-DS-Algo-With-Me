// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

class Solution {
  public:
    
    int nthFibonacci(int n){
        if(n<=1){
            return n;
        }
        int MOD= 1000000007;
        int prev=1;
        int prev2=0;
        int curr;
        for(int i=2;i<=n;i++){
            curr=(prev+prev2)%MOD;
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};
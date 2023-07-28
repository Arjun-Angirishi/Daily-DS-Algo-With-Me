// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=ans^(i+1);
            ans^=array[i];
        }
        ans^=n;
        return ans;
    }
};
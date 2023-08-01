// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {   
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while (j < k) {
            int sum = A[i] + A[j] + A[k];
            if (sum < X) {
                j++;
            }
            else if (sum > X) {
                k--;
            }
            else {
                return true;
            }
        }
        }
        return false;
    }

};
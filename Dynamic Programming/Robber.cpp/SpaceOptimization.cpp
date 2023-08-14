// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1


class Solution
{
    public:
    
    int FindMaxSum(int arr[], int n)
    {
        int prev=arr[0];
        int prev2=0;
        int curr=0;
        for(int i=1;i<n;i++){
            int left=arr[i];
            if(i>1){
                left+=prev2;
            }
            int right=prev;
            curr=max(left,right);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};
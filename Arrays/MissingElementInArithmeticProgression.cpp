// https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=5&difficulty[]=0&category[]=Arrays&sortBy=submissions

class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d=arr[n-1]-arr[0];
        d=d/n;
        for(int i=0;i<n-1;i++){
            if(arr[i]+d!=arr[i+1]){
                return arr[i]+d;
            }
        }
    }
};
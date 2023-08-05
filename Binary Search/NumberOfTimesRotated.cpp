// https://practice.geeksforgeeks.org/problems/rotation4723/1

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int ans=INT_MAX;
	    int ind;
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[st]<=arr[mid]){
                if(arr[st]<ans){
                    ind=st;
                    ans=arr[st];
                }
                st=mid+1;
            }else {
                if(arr[mid]<ans){
                    ind=mid;
                    ans=arr[mid];
                }
                end=mid-1;
            }
        }
        return ind;
    }

};
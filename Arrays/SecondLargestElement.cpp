// https://practice.geeksforgeeks.org/problems/second-largest3735/1

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int l=-1;
	    int m=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>l){
	            m=l;
	            l=arr[i];
	        }else if(arr[i]>m && arr[i]!=l){
	            m=arr[i];
	        }
	    }
	    return m;
	}
};
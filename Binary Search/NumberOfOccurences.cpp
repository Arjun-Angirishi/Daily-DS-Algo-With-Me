// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1


class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int st1=0;
	    int end1=n-1;
	    int st2=0;
	    int end2=n-1;
	    int ans1=-1;
	    while(st1<=end1){
	        int mid1=(st1+end1)/2;
	        if(arr[mid1]==x){
	            ans1=mid1;
	            end1=mid1-1;
	        }
	        else if(arr[mid1]<x){
	            st1=mid1+1;
	        }else end1=mid1-1;
	    }
	    int ans2=-1;
	    while(st2<=end2){
	       	int mid2=(st2+end2)/2;
	        if(arr[mid2]==x){
	            ans2=mid2;
	            st2=mid2+1;
	        }
	        else if(arr[mid2]<x){
	            st2=mid2+1;
	        }else end2=mid2-1; 
	    }
	    if(ans2==-1){
	        return 0;
	    }
	    return ans2-ans1+1;
	}
};
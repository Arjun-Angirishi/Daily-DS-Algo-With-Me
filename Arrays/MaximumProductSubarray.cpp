// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ans=INT_MIN;
	    long long pre=1;
	    for(int i=0;i<n;i++){
	        pre*=arr[i];
	        ans=max(ans,pre);
	        if(pre==0){
	            pre=1;
	        }
	    }
	    long long suf=1;
	    for(int i=n-1;i>-1;i--){
	        suf*=arr[i];
	        ans=max(ans,suf);
	        if(suf==0){
	            suf=1;
	        }
	    }
	    return ans;
	}
};
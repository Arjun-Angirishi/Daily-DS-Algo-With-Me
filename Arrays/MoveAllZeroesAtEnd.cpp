//https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            j=i;
	            for(int i=j+1;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[i],arr[j]);
	            j++;
	        }
	}
	break;
	        }
	    }
	    
	}
};
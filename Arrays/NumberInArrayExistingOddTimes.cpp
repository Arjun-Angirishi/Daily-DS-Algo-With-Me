//practice.geeksforgeeks.org/problems/single-number1014/1?page=7&difficulty[]=0&category[]=Arrays&sortBy=submissions

class Solution{
public:
	int getSingle(int arr[], int n) {
	    int xo=0;
	    for(int i=0;i<n;i++){
	        xo^=arr[i];
	    }
	    return xo;
	}
};
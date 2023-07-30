// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1

class Solution{
public:	
	int search(int A[], int N){
	    int xo=0;
	    for(int i=0;i<N;i++){
	        xo^=A[i];
	    }
	    return xo;
	    
	    
	}
};
// https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

class Solution{
	public:
	
	int func(int x,int m,int n){
	    long long prod=1;
	    for(int i=0;i<n;i++){
	        prod*=x;
	        if(prod>m){
	            return 2;
	        }
	    }
	    if(prod==m){
	        return 1;
	    }
	    else return 0;
	}
	
	int NthRoot(int n, int m)
	{
	    int st=1;
	    int end=m;
	    while(st<=end){
	        int mid=(st+end)/2;
	        if(func(mid,m,n)==1){
	            return mid;
	        }else if(func(mid,m,n)==2){
	            end=mid-1;
	        }else st=mid+1;
	    }
	    return -1;
	}  
};
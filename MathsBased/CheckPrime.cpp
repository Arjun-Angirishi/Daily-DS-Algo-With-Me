//  https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    while(A&&B){
	        if(A>B){
	            A%=B;
	        }else {
	            B%=A;
	        }
	    }
	    if(A==0){
	        return B;
	    }else {
	        return A;
	    }
	      
	} 
};
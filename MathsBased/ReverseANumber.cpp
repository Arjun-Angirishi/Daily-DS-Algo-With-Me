// https://practice.geeksforgeeks.org/problems/reverse-digit0316/1

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long temp=n;
		    long long num=0;
		    
		    while(n){
		        long long x=n%10;
		        n=n/10;
		        num=num*10 +x;       
		    }
		    return num;
		}
};
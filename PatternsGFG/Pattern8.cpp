// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1

class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=i-1;j++){
	            cout<<' ';
	        }
	        for(int j=1;j<=(2*(n-i))+1;j++){
	            cout<<'*';
	        }
	        cout<<endl;
	    }
	}
};
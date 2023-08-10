//https://practice.geeksforgeeks.org/problems/triangle-pattern/1

class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=n;i>0;i--){
	        for(int j=1;j<=i;j++){
	            cout<<'*'<<' ';
	        }
	        cout<<endl;
	    }
	}
};
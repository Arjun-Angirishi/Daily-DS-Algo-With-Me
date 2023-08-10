// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662287416/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            cout<<endl;
        }
        for(int i=n-1;i>0;i--){
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            cout<<endl;
        }        
    }
};
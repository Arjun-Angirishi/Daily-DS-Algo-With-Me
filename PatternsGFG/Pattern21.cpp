// https://practice.geeksforgeeks.org/problems/square-pattern-1662287714/1

class Solution {
  public:
    void printSquare(int n) {
        for(int i=1;i<=n;i++){
            if(i==1||i==n){
                for(int j=1;j<=n;j++){
                    cout<<'*';
                }
                cout<<endl;
            }
            else {
                cout<<'*';
                for(int j=1;j<=n-2;j++){
                    cout<<' ';
                }
                cout<<'*';
                cout<<endl;
            }

        }
    }
};
//https://practice.geeksforgeeks.org/problems/square-pattern/1

class Solution {
  public:
    void printSquare(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<'*' << ' ' ;
            }
            cout<<endl;
        }
    }
};


// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            int x=(int)'A';
            for(int j=1;j<=n-i;j++){
            cout<<' ';                
            }
            for(int j=1;j<=i;j++){
            cout<<(char)x;
            x++;
            }
            x--;
            for(int j=1;j<i;j++){
                x--;
                cout<<(char)x;
            }
            cout<<endl;

        }
    }
};
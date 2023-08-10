// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            int x=(int)'A';
            x=x+n-1;
            for(int j=1;j<=i;j++){
            cout<<(char)x<<' ';
            x--;
            }
            cout<<endl;
        }
    }
};
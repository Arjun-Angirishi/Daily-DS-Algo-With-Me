// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662284916/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            int x=(int)'A';
            for(int j=1;j<=i;j++){
                cout<<(char)x;
                x++;
            }
            cout<<endl;
        }
    }
};
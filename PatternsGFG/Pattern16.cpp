// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1

class Solution {
  public:
    void printTriangle(int n) {
                    int x=(int)'A';
        for(int i=1;i<=n;i++){

            for(int j=1;j<=i;j++){
                cout<<(char)x;
            }
            x++;
            cout<<endl;
        }
    }
};
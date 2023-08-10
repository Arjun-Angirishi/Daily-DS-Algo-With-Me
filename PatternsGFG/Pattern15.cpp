// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
            int x=(int)'A';
            for(int j=n-i;j>0;j--){
                cout<<(char)x;
                x++;
            }
            cout<<endl;
        }
    }
};
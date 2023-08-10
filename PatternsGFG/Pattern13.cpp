// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/1

class Solution {
  public:
    void printTriangle(int n) {
        int cnt=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<cnt++<<' ';
            }
            cout<<endl;
        }
    }
};
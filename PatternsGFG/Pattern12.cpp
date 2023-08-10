// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            int cnt=1;
            for(int j=1;j<=i;j++){
                cout<<cnt<<' ';
                cnt++;
            }
            cnt--;
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=n-i;j++){
                cout<<' ';
            }
            for(int j=1;j<=i;j++){
                cout<<cnt<<' ';
                cnt--;
            }
            cout<<endl;
        }
    }
};
//https://practice.geeksforgeeks.org/problems/right-triangle/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        return;
    }
};
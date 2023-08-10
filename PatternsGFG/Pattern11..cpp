// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1

class Solution {
  public:
    void printTriangle(int n) {
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                flag=false;
            }else flag=true;
            for(int j=1;j<=i;j++){
                cout<< flag<<' ';
                flag=!flag;
            }
            cout<<endl;
        }
    }
};
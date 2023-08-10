// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

class Solution {
  public:
    void printSquare(int n) {
        for(int i=1;i<=n;i++){
            int curr=n;
            for(int j=1;j<i;j++){
                cout<<curr<<' ';
                curr--;
            }
            for(int j=1;j<=(2*curr)-1;j++){
                cout<<curr<<' ';
            }
            for(int j=1;j<i;j++){
                curr++;
                cout<<curr<<' ';
            }
            cout<<endl;
        }
        for(int i=n-1;i>0;i--){
            int curr=n;
            for(int j=1;j<i;j++){
                cout<<curr<<' ';
                curr--;
            }
            for(int j=1;j<=(2*curr)-1;j++){
                cout<<curr<<' ';
            }
            for(int j=1;j<i;j++){
                curr++;
                cout<<curr<<' ';
            }
            cout<<endl;
        }
    }
};
// https://practice.geeksforgeeks.org/problems/largest-odd-number-in-string/1

class Solution {
  public:
    string maxOdd(string s) {
        string ans;
        int ind=-1;
        for(int i=0;i<s.size();i++){
            if(((int)(s[i]-'0'))%2){
                ind=i;
            }
        }
        if(ind=='-1'){
            return ans;
        }else{
            for(int i=0;i<=ind;i++){
                ans+=s[i];
            }
        }
        return ans;
    }
};
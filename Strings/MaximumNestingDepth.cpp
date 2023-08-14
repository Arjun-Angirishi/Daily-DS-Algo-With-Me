// https://practice.geeksforgeeks.org/problems/maximum-nesting-depth-of-the-parentheses/1

class Solution {
  public:
    int maxDepth(string s) {
        int cnt=0;
        int m=INT_MIN;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }else if(s[i]==')'){
                cnt--;
            }
            m=max(m,cnt);
        }
        return m;
    }
};
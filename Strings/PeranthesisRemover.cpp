// https://practice.geeksforgeeks.org/problems/outermost-parentheses/1

class Solution {
  public:
    string removeOuter(string& s) {
        int cnt=0;
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            char p=s[i];
            if(p=='('){
                cnt++;
                if(cnt==1){
                    ans.push_back(i);
                }
            }else if(p==')'){
                cnt--;
                if(cnt==0){
                    ans.push_back(i);
                }
            }
        }
        string s1;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(i==ans[j]){
                j++;
                continue;
            }
            s1+=s[i];
        }
        return s1;
        
    }
};
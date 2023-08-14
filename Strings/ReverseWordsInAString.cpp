// https://takeuforward.org/data-structure/reverse-words-in-a-string/

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string ans;
        string temp;
        int left=0;
        int right=S.size()-1;
        while(left<=right){
            char ch=S[left];
            if(ch!='.'){
                temp+=ch;
            }else{
                if(ans==""){
                    ans=temp;
                    temp="";
                }else {
                    ans=temp+'.'+ans;
                    temp="";
                }
            }
        left++;
    }
    if(temp!=""){
        if(ans!=""){
        ans=temp+'.'+ans;            
        }
        else{
            ans=temp;
        }

    }
    return ans;
    }
};
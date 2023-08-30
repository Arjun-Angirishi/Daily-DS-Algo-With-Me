// https://practice.geeksforgeeks.org/problems/word-ladder/1

class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        if(startWord==targetWord){
            return 0;
        }
        q.push({startWord,1});
        unordered_set <string> s(wordList.begin(),wordList.end());
        s.erase(startWord);
        while(!q.empty()){
            string curr=q.front().first;
            int lev=q.front().second;
            q.pop();
            if(curr==targetWord){
                return lev;
            }
            for(int i=0;i<curr.size();i++){
                char original=curr[i];
                for(char ch='a';ch<='z';ch++){
                    curr[i]=ch;
                    if(s.find(curr)!=s.end()){
                        s.erase(curr);
                        q.push({curr,lev+1});
                    }
                }
                curr[i]=original;
            }

        }
        return 0;
    }
};
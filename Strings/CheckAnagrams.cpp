//https://practice.geeksforgeeks.org/problems/anagram-1587115620/1


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        unordered_map<char,int> m;
        for(int i=0;i<a.length();i++){
            m[a[i]]++;
        }
        for(int i=0;i<b.length();i++){
            m[b[i]]--;
        }
        for(auto p:m){
            if(p.second!=0){
                return false;
            }
        }
        return true;
        
    }

};
//  https://practice.geeksforgeeks.org/problems/8d157f11af5416087251513cfc38ffc4d23be308/1?page=1&category[]=Trie&sortBy=submissions

struct Node {
    Node* links[26];
    bool flag=false;
};



class Solution
{
public:

    bool check(string s, Node* root){
        bool ans=true;
        Node* node=root;
        for(int i=0;i<s.length();i++){
            if(node->links[s[i]-'a']!=NULL){
                node=node->links[s[i]-'a'];
                if (node->flag!=true){
                    return false;
                }
            }else {
                return false;
            }
        }
        return true;
    }
    string longestString(vector<string> &words)
    {
        Node* root=new Node();
        for(auto p:words){
            Node* node=root;
            for(int i=0;i<p.length();i++){
                if(node->links[p[i]-'a']==NULL){
                    node->links[p[i]-'a']=new Node();
                }
                node=node->links[p[i]-'a'];
            }
            node->flag=true;
        }
        int maxi=0;
        string ans="";
        for(auto p:words){
            if(check(p,root)){
                if(p.length()>maxi){
                    maxi=p.length();
                    ans=p;
                }else if(p.length()==maxi){
                    if(p<ans){
                        ans=p;
                    }
                }
            }
        }
        return ans;
        
        
    }
};
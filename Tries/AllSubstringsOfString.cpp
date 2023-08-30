// https://practice.geeksforgeeks.org/problems/count-of-distinct-substrings/1?page=1&category[]=Trie&sortBy=submissions


struct Node{
    Node* links[26];
    bool ContainsKey(char ch){
        return (links[ch-'a']!=NULL);
    }
};
/*You are required to complete this method */
int countDistinctSubstring(string s)
{
    Node* root=new Node();

    int ans=1;
    for(int i=0;i<s.length();i++){
            Node* node=root;
        for(int j=i;j<s.length();j++){
            if(!node->ContainsKey(s[j])){
              ans++;
              node->links[s[j]-'a']=new Node();
            }
            node=node->links[s[j]-'a'];
        }

    }
    return ans;
}
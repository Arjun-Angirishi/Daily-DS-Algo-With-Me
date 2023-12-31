// https://practice.geeksforgeeks.org/problems/trie-insert-and-search0651/1


// User function template for C++

// trie node
/*
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
*/

//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    TrieNode* node=root;
    for(int i=0;i<key.length();i++){
        if(node->children[key[i]-'a']==NULL){
            node->children[key[i]-'a']=new TrieNode();
        }
        node=node->children[key[i]-'a'];
    }
    node->isLeaf=true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    TrieNode* node=root;
    for(int i=0;i<key.length();i++){
        if(node->children[key[i]-'a']==NULL){
            return false;
        }
        node=node->children[key[i]-'a'];
    }
    return node->isLeaf;
}
// https://practice.geeksforgeeks.org/problems/trie-delete/1


/*Complete the function below
Node is as follows:
struct trie_node
{
    int value; // non zero if leaf
    trie_node_t *children[ALPHABET_SIZE];
};*/
class Solution{
  public:
  void deleteKey(trie_node_t *root, char key[])
  {
    trie_node* node=root;
    int sz=strlen(key);
    for(int i=0;i<sz;i++){
        if(!node->children[key[i]-'a']){
            return ;
        }
        node=node->children[key[i]-'a'];
    }
    node->value=0;
    return;
  }
};
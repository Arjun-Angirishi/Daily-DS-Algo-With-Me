// https://practice.geeksforgeeks.org/problems/most-frequent-word-in-an-array-of-strings3528/1?page=1&category[]=Trie&sortBy=submissions
 

struct Node {
    Node *links[26]; 
    int freq = 0; 
    bool containsKey(char ch) {
        return links[ch - 'a'] != NULL; 
    }
    void put(char ch, Node *node) {
        links[ch - 'a'] = node; 
    }
    Node* get(char ch) {
        return links[ch - 'a']; 
    }
    void increaseFreq() { freq++; }
    int getFreq() { return freq; }
}; 

class Trie {
    private: 
        Node* root; 
    public: 
        Trie() {
            root = new Node(); 
        }
        int insert(string &str) {
            Node *node = root; 
            for(int i = 0; i < str.size(); i++) {
                if(!node->containsKey(str[i])) {
                    node->put(str[i], new Node()); 
                }
                node = node->get(str[i]); 
            }
            node->increaseFreq(); 
            return node->getFreq(); 
        }
         
}; 
    
    
class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        int ind = -1; 
        int mxFreq = 0; 
        Trie trie; 
        for(int i = n - 1; i >= 0; i--) {
            int currFreq = trie.insert(arr[i]); 
            //cout << currFreq << endl; 
            if(currFreq > mxFreq) {
                ind = i; 
                mxFreq = currFreq; 
            }
        }  
        return arr[ind]; 
    }
};
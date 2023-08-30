// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
    
    void addRight(Node* root,vector<int> &res){
        Node* temp=root->right;
        vector<int> V;
        while(temp){
            if(!isLeaf(temp)){
                V.push_back(temp->data);
            }if(temp->right)temp=temp->right;
            else temp=temp->left;
        }
        for(int i=V.size()-1;i>=0;--i){
            res.push_back(V[i]);   
            
        }
        return;
    }
    
    
    bool isLeaf(Node* root){
        if(root->left||root->right){
            return false;
        }return true;
    }
    
    void addLeaf (Node* root,vector<int> &res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }    
        if(root->left)addLeaf(root->left,res);
        if(root->right)addLeaf(root->right,res);
    }
    
    void addLeft(Node* root,vector<int> &res){
        Node* temp=root->left;
        while(temp){
            if(!isLeaf(temp)){
                res.push_back(temp->data);
            }
            if(temp->left)temp=temp->left;
            else temp=temp->right;
        }
        return;
    }
    
public:
    vector <int> boundary(Node *root)
    {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        if(!isLeaf(root)){
            res.push_back(root->data);
        }
        addLeft(root,res);
        addLeaf(root,res);
        addRight(root,res);
        return res;
    }
};
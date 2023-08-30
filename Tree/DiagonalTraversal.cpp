// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1?page=3&category[]=Tree&sortBy=submissions


void preorder(Node* root, map<int,vector<int>> &m, int s ){
    if(root==NULL){
        return;
    }
    m[s].push_back(root->data);
    preorder(root->left,m,s+1);
    preorder(root->right,m,s);
}

vector<int> diagonal(Node *root)
{
   vector<int> res;
   if(root==NULL){
       return res;
   }
   map<int,vector<int>> m;
   preorder(root,m,0);
   for(auto p:m){
       for(auto q:p.second){
           res.push_back(q);
       }
   }

   return res;
}
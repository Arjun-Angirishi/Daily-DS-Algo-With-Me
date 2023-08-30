//  https://practice.geeksforgeeks.org/problems/ancestors-in-binary-tree/1?page=4&category[]=Tree&sortBy=submissions

class Solution{
  public:
    bool preorder(Node* root, int target,stack<int> &ans){
        if(root==NULL){
            return false;
        }
        if(root->data==target){
            return true;
        }
        ans.push(root->data);
        if(preorder(root->left,target,ans)||preorder(root->right,target,ans)){
            return true;
        }
        ans.pop();
        return false;
    }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
         stack<int> ans;
         if(root->data==target){
             return {};
         }
         preorder(root,target,ans);
         vector<int> a1;
         while(!ans.empty()){
             a1.push_back(ans.top());
             ans.pop();
         }
         return a1;
    }
};
//https://practice.geeksforgeeks.org/problems/level-order-traversal/1

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int> ans;
      queue<Node*> q;
      if(node==NULL){
          return ans;
      }
      q.push(node);
      while(!q.empty()){
          Node* curr=q.front();
          q.pop();
          if(curr->left!=NULL){
              q.push(curr->left);
          }
          if(curr->right!=NULL){
          q.push(curr->right);
          }
          ans.push_back(curr->data);
      }
      return ans;
    }
};
// https://practice.geeksforgeeks.org/problems/preorder-traversal/1


void solve(Node* root, vector<int> &ans){
    if(root==NULL)return;
    ans.push_back(root->data);
    solve(root->left,ans);
    solve(root->right,ans);
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{   vector<int> ans;
    solve(root,ans);
    return ans;
}
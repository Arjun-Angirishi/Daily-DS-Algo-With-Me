// https://practice.geeksforgeeks.org/problems/floor-in-bst/1

int floor(Node* root, int x) {
    if(root==NULL)return -1;
    int ans=-1;
    while(root){
        if(root->data==x){
            ans=root->data;
            return ans;
        }
        else if(root->data<x){
            ans=root->data;
            root=root->right;
        }
        else root=root->left;
    }
    return ans;
}
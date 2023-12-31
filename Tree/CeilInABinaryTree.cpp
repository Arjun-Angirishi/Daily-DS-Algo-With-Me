// https://practice.geeksforgeeks.org/explore?page=1&sortBy=submissions

int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int ans=-1;
    while(root){
        if(root->data==input){
           ans=root->data;
           return ans;
        }else if(root->data<input){
            root=root->right;
        }else{
            ans=root->data;
            root=root->left;
        }
    }
    return ans;
}
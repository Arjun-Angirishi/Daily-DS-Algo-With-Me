// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1?page=2&category[]=Tree&sortBy=submissions

int minValue(Node* root) {
    if(root==NULL){
        return -1;
    }
    if(minValue(root->left)==-1){
        return root->data;
    }
    return minValue(root->left);
}
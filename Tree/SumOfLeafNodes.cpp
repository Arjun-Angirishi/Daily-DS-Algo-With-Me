//  https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes/1?page=4&category[]=Tree&sortBy=submissions
 

int sum(Node* root){
    if(!root)return 0;
    if(!root->left&&!root->right){
        return sum(root->left)+sum(root->right)+root->data;
    }
    return sum(root->left)+sum(root->right);
}
int sumLeaf(Node* root)
{
    return sum(root);
}
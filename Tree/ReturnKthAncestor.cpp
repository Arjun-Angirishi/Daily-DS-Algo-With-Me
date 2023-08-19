// https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1?page=2&category[]=Tree&sortBy=submissions


//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
bool find(Node * root, int k , int node, stack<Node *> &st ){
    if(root==NULL){
        return false; 
    }
    st.push(root);
    if(root->data==node){
        return true;
    }
    if(find(root->left,k,node,st)){
        return true;
    }
    if(find(root->right,k,node,st)){
        return true;
    }
    st.pop();
    return false;
}

int kthAncestor(Node *root, int k, int node)
{
    stack<Node *> st;
    find(root,k,node,st);
    for(int i=0;i<k;i++){
        st.pop();
        if(st.empty()){
            return -1;
        }
    }
    return st.top()->data;
}
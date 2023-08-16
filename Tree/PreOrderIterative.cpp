// https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/1


class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int> preorder;
        if(root==NULL)return preorder;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* curr=st.top();
            st.pop();
            if(curr->right!=NULL){
                st.push(curr->right);
            }
            if(curr->left!=NULL){
                st.push(curr->left);
            }
            preorder.push_back(curr->data);
        }
        return preorder;
    }
};
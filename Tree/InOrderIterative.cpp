//https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        stack<Node*> st; 
        vector<int> inorder;
        if(root==NULL){
            return inorder;
        }
        while(true){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }else {
                if(st.empty())break;
                root=st.top();
                st.pop();
                inorder.push_back(root->data);
                root=root->right;
            }
        }
        return inorder;
    }
};
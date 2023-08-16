// https://www.codingninjas.com/studio/problems/tree-traversals_981269?leftPanelTab=1

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans(3);
    stack<pair<TreeNode*,int>> st;
    if(root==NULL){
        return ans;
    }
    st.push({root,1});
    while(!st.empty()){
        pair<TreeNode*,int> temp=st.top();
        st.pop();
        if(temp.second==1){
            ans[1].push_back(temp.first->data);
            st.push({temp.first,++temp.second});
            if(temp.first->left!=NULL){
                st.push({temp.first->left,1});
            }
        }else if(temp.second==2){
            ans[0].push_back(temp.first->data);
            st.push({temp.first,++temp.second});
            if(temp.first->right!=NULL){
                st.push({temp.first->right,1});
            }
        }else {
            ans[2].push_back(temp.first->data);
        }
    }
    return ans;
}
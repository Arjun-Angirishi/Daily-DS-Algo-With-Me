// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1?page=2&category[]=Tree&sortBy=submissions

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    stack<vector<int>> st;
    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        int sz=q.size();
        vector<int> temp;
        for(int i=0;i<sz;i++){
            Node* d=q.front();
            q.pop();
            temp.push_back(d->data);
            if(d->left){
                q.push(d->left);
            }
            if(d->right){
                q.push(d->right);
            }
        }
        st.push(temp);
    }
    while(!st.empty()){
        auto p=st.top();
        st.pop();
        for(auto q:p){
            ans.push_back(q);
        }
    }
    return ans;
}
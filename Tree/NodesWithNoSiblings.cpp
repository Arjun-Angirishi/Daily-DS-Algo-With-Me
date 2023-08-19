//  https://practice.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1?page=2&category[]=Tree&sortBy=submissions

//User function Template for C++

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

vector<int> noSibling(Node* node)
{
    vector<int> ans;
    if(node==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        int sz=q.size();

        for(int i=0;i<sz;i++){
            Node* temp=q.front();
            q.pop();
            if(temp->left==NULL&&temp->right!=NULL){
                ans.push_back(temp->right->data);
            }
            if(temp->left!=NULL&&temp->right==NULL){
                ans.push_back(temp->left->data);
            }
            if(temp->left!=NULL){
                    q.push(temp->left);
            }
            if(temp->right!=NULL){
                    q.push(temp->right);
            }
        }
    }
    if(ans.size()==0){
        ans.push_back(-1);
        return ans;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
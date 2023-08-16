// https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1

class Solution{
    public:
    vector<int> postOrder(Node* node) {
        stack<Node*>s1,s2;
        vector<int> ans;
        if(node==NULL){
            return ans;
        }
        s1.push(node);
        while(!s1.empty()){
            Node* temp=s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left!=NULL){
                s1.push(temp->left);
            }
            if(temp->right!=NULL){
                s1.push(temp->right);
            }

        }
        while(!s2.empty()){
            Node* temp=s2.top();
            s2.pop();
            ans.push_back(temp->data);
        }
        return ans;
    }
};
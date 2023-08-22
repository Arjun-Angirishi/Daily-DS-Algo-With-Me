// https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

class Solution
{
    public:
        Node* insert(Node* node, int data) {
            if(node==NULL){
                return new Node(data);
            }
            Node* prev=node;
        while(true){
            if(prev->data==data){
                return node;
            }
            if(prev->data<data){
                if(prev->right){
                    prev=prev->right;
                }else {prev->right=new Node(data);
                return node;}
            }else {
                if(prev->left){
                    prev=prev->left;
                }else {
                    prev->left=new Node(data);
                    return node;
                }
            }
        }
        return node;
    }

};
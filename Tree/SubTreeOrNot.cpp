// https://practice.geeksforgeeks.org/problems/check-if-subtree/1?page=2&category[]=Tree&sortBy=submissions


class Solution
{
  public:
    bool isSame(Node* T,Node* S){
        if(T==NULL||S==NULL){
            return T==S;
        }
        return (T->data==S->data)&&isSame(T->left,S->left)&&isSame(T->right,S->right);
    }
    bool isSubTree(Node* T, Node* S) 
    {
        if(T==NULL){
            return S==NULL;
        }
        if(S==NULL){
            return true;
        }
        bool l=isSubTree(T->left,S);
        bool r=isSubTree(T->right,S);
        if(l==true||r==true){
            return true;
        }
        return isSame(T,S);
    }
};
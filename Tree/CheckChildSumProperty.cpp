//  https://practice.geeksforgeeks.org/problems/children-sum-parent/1

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     if(root==NULL){
         return 1;
     }
     int total=0;
     if(root->left){
         total+=root->left->data;
     }
     if(root->right){
         total+=root->right->data;
     }
     if(root->left||root->right){
            if(total!=root->data){
         return 0;
     }  
     }

     int l=isSumProperty(root->left);
     int r=isSumProperty(root->right);
     if(l==0||r==0){
         return 0;
     }
     return 1;
    }
};
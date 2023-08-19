// https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1?page=3&category[]=Tree&sortBy=submissions

int getSize(Node* node)
{
   if(node==NULL){
       return 0;
   }
   return getSize(node->left)+getSize(node->right)+1;
}
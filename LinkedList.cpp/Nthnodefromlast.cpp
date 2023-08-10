// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        if(head->next==NULL&&n>1){
            return -1;
        }
           Node* fast=head;
           Node* slow=head;
           for(int i=0;i<n-1;i++){

               fast=fast->next;
                if(i!=n-2&&fast->next==NULL){
                   return -1;
               }
               
           }
           while(fast->next!=NULL){
               fast=fast->next;
               slow=slow->next;
           }
           return slow->data;
    }
};
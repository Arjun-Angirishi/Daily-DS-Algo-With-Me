// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* newhead=reverseList(head->next);
        Node* nextnode=head->next;
        nextnode->next=head;
        head->next=NULL;
        return newhead;
    }
    
};
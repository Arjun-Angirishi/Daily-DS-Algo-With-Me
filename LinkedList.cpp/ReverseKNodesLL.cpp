//  https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
        int lengthOfLinkedList(node* head) {
        int length = 0;
        while(head != NULL) {
            ++length;
            head = head->next;
        }
        return length;
    }
    node* reverse(node* head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        node* newhead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
    
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL||head->next==NULL){
            return head;
        }
        int cnt=lengthOfLinkedList(head);
        node* dummy=new node(0);
        dummy->next=head;
        node* curr=head;
        node* nex=dummy;
        node* pre=dummy;
        while(cnt>=k){
            curr=pre->next;
            nex=curr->next;
            for(int i=1;i<k;i++){
                curr->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=curr->next;
            }
            pre=curr;
            cnt-=k;
        }
        pre->next=reverse(pre->next);
        
        return dummy->next;
    }
};
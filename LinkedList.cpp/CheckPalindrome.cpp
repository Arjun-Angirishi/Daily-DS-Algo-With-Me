//https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1?page=1&category[]=Linked%20List&sortBy=submissions

class Solution{
  public:
    struct Node* reverse(Node* head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* newhead=reverse(head->next);
        Node* nxt=head->next;
        nxt->next=head;
        head->next=NULL;
        return newhead;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL||head->next==NULL){
            return true;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        Node* d=head;
        while(slow!=NULL){
            if(d->data!=slow->data){
                return false;
            }
            d=d->next;
            slow=slow->next;
        }
        return true;
    }
};
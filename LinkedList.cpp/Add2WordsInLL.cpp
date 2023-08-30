// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1


class Solution
{
    public:
    
    Node* reverse(Node* head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* newhead=reverse(head->next);
        Node* nxt=head->next;
        nxt->next=head;
        head->next=NULL;
        return newhead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        Node* dummy=new Node(0);
        Node* temp=dummy;
        
        int carry=0;
        while(first!=NULL||second!=NULL||carry!=0){
            int sum=0;
            if(first!=NULL){
                sum+=first->data;
                first=first->next;
            }
            if(second!=NULL){
                sum+=second->data;
                second=second->next;
            }
            sum+=carry;
            Node* node=new Node(sum%10);
            carry=sum/10;
            temp->next=node;
            temp=temp->next;
        }
        Node* newhead= dummy->next;
        return reverse(newhead);
    }
}; 
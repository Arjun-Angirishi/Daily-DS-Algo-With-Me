//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL||(head->next==NULL)){
            return false;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};
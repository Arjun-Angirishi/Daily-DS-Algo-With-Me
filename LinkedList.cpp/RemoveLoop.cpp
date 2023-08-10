//https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
    Node* fast = head;
    Node* slow = head;
    Node* entry = head;
    Node* prev=head;
    
    while(fast->next != NULL&&fast->next->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
            
        if(slow == fast) {
            while(slow != entry) {
                prev=slow;
                slow = slow->next;
                entry = entry->next;
            }
            prev->next=NULL;
            return;
        }
    }
    return ;

    }
};
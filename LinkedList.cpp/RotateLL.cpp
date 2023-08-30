// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head==NULL||head->next==NULL||k==0){
            return head;
        }
        Node *curr=head;
        int cnt=1;
        while(curr->next){
            curr=curr->next;
            cnt++;
        }
        curr->next=head;
        k=k%cnt;
        while(k--){
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};
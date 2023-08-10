//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions



class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node * slow=head;
        Node * fast=head;
        while(true){
            if((fast==NULL)||((fast->next)==NULL)){
                break;
            }
            slow=slow->next;
            fast=fast->next->next;

        }
        return slow->data;
    }
};
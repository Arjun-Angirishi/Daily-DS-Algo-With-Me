// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1?page=1&category[]=Linked%20List&sortBy=submissions

int intersectPoint(Node* head1, Node* head2)
{
    Node* d1 = head1;
    Node* d2 = head2;
    
    bool flag1=false;
    bool flag2=false;
    while(d1 != d2) {
        d1=d1->next;
        d2=d2->next;
        if(d1==NULL){
            if(!flag1){
            flag1=true;
            d1=head2;                
            }
            else{
                return -1;
            }

        }
        if(d2==NULL){
            if(!flag2){
            flag2=true;
            d2=head1;                
            }
            else{
                return -1;
            }

        }
    }
    
    return d1->data;
}
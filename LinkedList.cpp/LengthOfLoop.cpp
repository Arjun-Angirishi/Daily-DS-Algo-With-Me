//https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455?leftPanelTab=1

int lengthOfLoop(Node *head) {
    Node* fast=head;
    Node* slow=head;
    Node* entry=head;
    int cnt=1;
    while(fast->next&&fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            while(entry!=slow){
                entry=entry->next;
                slow=slow->next;
            }
            while(true){
            entry=entry->next;
            if(entry==slow){
                return cnt;
            }
            cnt++;
            }

        }

    }
    return 0;
}
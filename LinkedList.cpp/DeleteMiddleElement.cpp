//  https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1

    if(!(head && head->next)) return nullptr;
    
    Node *slow = head, *fast = head, *prev = nullptr;
    
    while(fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    prev->next = slow->next;
    slow = nullptr;
    
    return head;
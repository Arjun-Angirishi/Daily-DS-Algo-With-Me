//  https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a; 
            temp = temp->bottom; 
            a = a->bottom; 
        }
        else {
            temp->bottom = b;
            temp = temp->bottom; 
            b = b->bottom; 
        }
    }
    
    if(a) temp->bottom = a; 
    else temp->bottom = b; 
    
    return res -> bottom; 
    
}

Node* flattening(Node* root){
    
        if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flattening(root->next); 
  
        // now merge 
        root = mergeTwoLists(root, root->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return root; 
}
Node *flatten(Node *root)
{
    Node* head=flattening(root);
    Node* ans=new Node(0);
    Node* temp=ans;
    while(head!=NULL){
        temp->next=head;
        head=head->bottom;
        temp=temp->next;
    }
    return ans->next;
}
// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1


    Node *copyList(Node *head)
    {
        //Write your code here
         Node *itr = head;
        Node *front = head;
        while(itr){
            front = itr -> next;

            Node *copy = new Node(itr ->data);
            itr -> next = copy;
            copy -> next = front;

            itr = front;
        }

        itr = head;
        while (itr){
            if (itr -> arb){
                itr -> next  -> arb = itr -> arb -> next;
            }
            itr= itr -> next -> next;
        }

        itr = head;
        Node *pseudohead = new  Node(0);
        Node *copy= pseudohead;

        while(itr){
            front = itr -> next -> next;
            copy -> next = itr -> next;

            itr -> next = front;
            copy= copy -> next;
            itr = front;
        }

        return pseudohead -> next;
    }
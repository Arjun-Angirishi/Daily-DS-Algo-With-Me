// https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1


class Solution{
public:
    Node* divide(int N, Node *head){
        vector<int> odd;
        vector<int> even;
        Node* temp=head;
        for(int i=0;i<N;i++){
            int d=temp->data;
            if(d%2)odd.push_back(d);
            else even.push_back(d);
            temp=temp->next;
        }
        temp=head;
        for(auto p:even){
            temp->data=p;
            temp=temp->next;
        }
        for(auto p:odd){
            temp->data=p;
            temp=temp->next;
        }
        return head;
    }
};
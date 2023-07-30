//https://practice.geeksforgeeks.org/problems/reverse-a-stack/1

class Solution{
public:

    void insert(stack<int>&St,int temp){
        if(St.size()==0){
            St.push(temp);
            return;
        } 
        int val=St.top();
        St.pop();
        insert(St,temp);
        St.push(val);
        return;
    }
    
    void Reverse(stack<int> &St){
        if(St.size()==1){
            return;
        }
        int temp=St.top();
        St.pop();
        Reverse(St);
        insert(St,temp);
    }
};
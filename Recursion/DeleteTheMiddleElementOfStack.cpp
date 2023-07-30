// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

class Solution
{
    public:
    
    void solve(stack<int> &s,int k){
        if(k==1){
            s.pop();
            return;
        }
        int val=s.top();
        s.pop();
        solve(s,k-1);
        s.push(val);
        return ;
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.size()==0){
            return ;
        }
        int mid=((sizeOfStack+2)/2);
        solve(s,mid);
        return ;
    }
};
// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?page=1&category[]=Recursion&sortBy=submissions

class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N<1){
            return ;
        }
        else {
            printNos(N-1);
            cout<<N<<" ";
            
        }
    }
};
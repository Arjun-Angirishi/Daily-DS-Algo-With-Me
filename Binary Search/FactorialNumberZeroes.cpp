// https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1?page=1&category[]=Binary%20Search&sortBy=submissions

class Solution
{
    public:
        bool check(int n,int mid){
            int cnt=0;
            while(mid){
                cnt+=mid/5;
                mid/=5;
            }
            if(cnt>=n){
                return true;
            }
            return false;
        }
        
        int findNum(int n)
        {
        int st=0;
        int end=n*5;
        while(st<=end){
         int mid=(st+end)/2;
         if(check(n,mid)){
             end=mid-1;
         }else {
             st=mid+1;
         }
        }
        return st;
        }
};
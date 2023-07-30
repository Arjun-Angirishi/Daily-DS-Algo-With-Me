// https://practice.geeksforgeeks.org/problems/square-root/1?page=1&category[]=Binary%20Search&sortBy=submissions


class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long st=0;
        long long end=x;
        long long mid;
        long long ans;
        while(st<=end){
            mid=(st+end)/2;
            long long p=mid*mid;
            if(x==p){
                ans=mid;
                break;
            }else if(x<p){
                end=mid-1;
            }else {
                ans=mid;
                st=mid+1;
            }
        }
        return ans;
    }
};
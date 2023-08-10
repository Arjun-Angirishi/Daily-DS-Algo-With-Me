// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1


class Solution 
{
    public:
    int check(int A[],int N,int M,int mid){
        int cnt=0;
        int curr=0;
        for(int i=0;i<N;i++){
            if(curr+A[i]>mid){
                cnt++;
                curr=A[i];
            }else{
                curr+=A[i];
            }
        }
        cnt++;
        return cnt;
    }
    
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        int end=0;
        for(int i=0;i<N;i++){
            end+=A[i];
        }
        int st=*max_element(A,A+N);
        int ans=INT_MAX;
        while(st<=end){
            int mid=(st+end)/2;
            if(check(A,N,M,mid)<=M){
                ans=mid;
                end=mid-1;
            }else st=mid+1;
        }
        return ans;
    }
};
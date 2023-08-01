// https://practice.geeksforgeeks.org/problems/search-in-rotated-array-2/1

class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        int st=0;
        int end=N-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(A[mid]==Key){
                return true;
            }else if(A[st]==A[end]&&A[mid]==A[st]){
                st++;
                end--;
            }else if(A[st]<=A[mid]){
            if(A[st]<=Key&&A[mid]>=Key){
                end=mid-1;
            }else st=mid+1;
        }else {
            if(A[end]>=Key&&A[mid]<=Key){
                st=mid+1;
            }else end=mid-1;
        }
        }
        return false;
    }
};
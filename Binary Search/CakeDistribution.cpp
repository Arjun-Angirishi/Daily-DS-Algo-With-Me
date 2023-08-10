//https://practice.geeksforgeeks.org/problems/0a7c7f1089932257071f9fa076f25d353f91e0fd/1?page=2&category[]=Binary%20Search&sortBy=submissions


class Solution{
    public:
    bool check(vector<int>& sweetness,int N,int K,int mid){
        int cnt=0;
        int curr=0;
        for(int i=0;i<N;i++){
            curr+=sweetness[i];
            if(curr>=mid){
                cnt++;
                curr=0;
            }
        }
        if(cnt>=K+1){
            return true;
        }
        else return false;
    }
    
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        int st=*min_element(sweetness.begin(),sweetness.end());
        int end=0;
        for(auto p: sweetness){
            end+=p;
        }
        while(st<=end){
            int mid=(st+end)/2;
            if(check(sweetness,N,K,mid)){
                st=mid+1;
            }else end=mid-1;
        }
        return end;
    }
};
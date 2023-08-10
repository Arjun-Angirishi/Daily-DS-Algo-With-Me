//https://practice.geeksforgeeks.org/problems/aggressive-cows/1


class Solution {
public:

    bool check(int n,int k,vector<int> &stalls, int mid){
        int cnt=1;
        int prev=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-prev>=mid){
                cnt++;
                prev=stalls[i];
            }
        }
        if(cnt>=k)return true;
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int st=1;
    int end=stalls[n-1];
    int ans=0;
    while(st<=end){
        int mid=(st+end)/2;
        if(check(n,k,stalls,mid)){
            ans=mid;
            st=mid+1;
        }else end=mid-1;
    }
    return ans;
    }
};
// https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
    int ans1=-1;
    int ans2=-1;
    int st=0;
    int n=v.size();
    int end=n-1;
    int mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(v[mid]==x){
            ans1=mid;
            end=mid-1;
        }else if(v[mid]>x){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    int st1=0;
    int end1=n-1;
    
    int mid1;
    while(st1<=end1){
        mid1=(st1+end1)/2;
        if(v[mid1]==x){
            ans2=mid1;
            st1=mid1+1;
        }else if(v[mid1]>x){
            end1=mid1-1;
        }else{
            st1=mid1+1;
        }
    }
    pair<int,int> ans;
    ans={ans1,ans2};
    return ans;
    }
};
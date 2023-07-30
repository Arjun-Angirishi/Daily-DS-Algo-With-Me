//https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        long long st=0;
        long long end=n-1;
        long long mid;
        int ans=-1;
        while(st<=end){
            mid=st+(end-st)/2;
            if(v[mid]<=x){
                ans=mid;
                st=mid+1;
            }else end=mid-1;
        }
        return ans;
        
    }
};
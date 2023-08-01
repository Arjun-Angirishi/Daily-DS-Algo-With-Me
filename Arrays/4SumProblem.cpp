// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>0&&arr[i]==arr[i-1])continue;
            for(int j=i+1;j<n;j++){
            if(j>i+1&&arr[j]==arr[j-1])continue;
            int m=j+1;
            int l=n-1;
            while(m<l){
                int sum=arr[i]+arr[j];
            sum+=arr[m]+arr[l];
            if(sum==k){
                vector<int> temp={arr[i],arr[j],arr[m],arr[l]};
                ans.push_back(temp);
                m++;
                l--;
                while(m<l&&arr[m]==arr[m-1])m++;
                while(m<l&&arr[l]==arr[l+1])l--;
            }else if(sum<k){
                m++;
            }else {
                l--;
            }
            }
            
            }
        }
        return ans;
    }
};
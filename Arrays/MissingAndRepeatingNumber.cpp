// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1


class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long sum=0;
        long long sq=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            sq+=(long long)arr[i]*(long long)arr[i];
        }
        long long N=n;
        vector<int> ans;
        long long sumcurr=(N*(N+1))/2;
        long long sqcurr=(N*(N+1)*(2*N+1))/6;
        long long xmy=sumcurr-sum;
        long long xsmys=sqcurr-sq;
        long long xpy=xsmys/xmy;
        //return {xmy,xpy};

        ans.push_back((xpy-xmy)/2);
        ans.push_back((xpy+xmy)/2);
        return ans;
    }
};
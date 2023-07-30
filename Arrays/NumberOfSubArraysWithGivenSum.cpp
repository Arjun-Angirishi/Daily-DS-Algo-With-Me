// https://practice.geeksforgeeks.org/problems/subarrays-with-sum-k/1

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        unordered_map<int,int> m;
        long long prefix=0;
        m[0]=1;
        int cnt=0;
        for(int i=0;i<N;i++){
            prefix+=Arr[i];
            int remove=prefix-k;
            cnt+=m[remove];
            m[prefix]++;
        }
        return cnt;
    }
};
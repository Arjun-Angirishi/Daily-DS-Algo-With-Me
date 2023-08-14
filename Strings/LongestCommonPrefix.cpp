// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1


class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {   
        int m=INT_MAX;
        for(int i=0;i<N;i++){
            int l=arr[i].length();
            m=min(l,m);
        }
        string ans;
        for(int j=0;j<m;j++){
            char x=arr[0][j];
            for(int i=1;i<N;i++){
                if(arr[i][j]!=x){
                    int l=ans.length();
                    return l==0?"-1":ans;
                }
            }
            ans+=x;
        }
    return ans;
    }
};
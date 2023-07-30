//  https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_set<int> s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      int ans=1;
      
      for(auto p: s){
          if(s.find(p-1)==s.end()){
              int currlen=1;
              while(s.find(p+1)!=s.end()){
                  currlen++;
                  ans=max(currlen,ans);
                  p++;
              }
          }
      }
      return ans;
    }
};
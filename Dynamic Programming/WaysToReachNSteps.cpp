// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1

class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        int prev=0;
        int prev2=0;
        for(int i=1;i<n;i++){
            int jump1=prev+abs(height[i]-height[i-1]);
            int jump2=INT_MAX;
            if(i>1){
                jump2=prev2+abs(height[i]-height[i-2]);
            }
            int ans=min(jump1,jump2);
            prev2=prev;
            prev=ans;
        }
        return prev;
    }
};
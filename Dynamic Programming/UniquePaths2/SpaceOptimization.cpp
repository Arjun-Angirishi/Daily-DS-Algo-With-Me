// https://practice.geeksforgeeks.org/problems/96161dfced02d544fc70c71d09b7a616fe726085/1

class Solution {
  public:
    int MOD=1000000007;
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        vector<int> dp(m,0);
        for(int i=0;i<n;i++){
            vector<int> temp(m,0);
            for(int j=0;j<m;j++){
                if (grid[i][j]==0){
                    temp[j]=0;
                    continue;
                }
                
                if(i==0&&j==0){
                    temp[j]=1;
                    continue;
                }
                
                int up=0;
                int down=0;
                if(i>0)up=dp[j];
                if(j>0)down=temp[j-1];
                
                temp[j]=(up+down)%MOD;
            }
            dp=temp;
        }
        return dp[m-1];
    }
};
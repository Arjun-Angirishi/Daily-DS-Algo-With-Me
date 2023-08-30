//  https://www.codingninjas.com/studio/problems/minimum-path-sum_985349?leftPanelTab=1


#include <bits/stdc++.h>

int minSumPath(vector<vector<int>> &grid) {
    int N=grid.size();
    int M=grid[0].size();
    vector<vector<int>> dp(N,vector<int> (M,0));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(i==0&&j==0){
                dp[i][j]=grid[0][0];
            }else {
                int up=grid[i][j];
                if(i>0){
                    up+=dp[i-1][j];
                } else {
                    up += 1e9;
                }
                int left=grid[i][j];
                if(j>0){
                    left+=dp[i][j-1];
                } else {
                    left += 1e9;
                }
                dp[i][j]=min(up,left);
            }
        }
    }
    return dp[N-1][M-1];
}
//  https://www.codingninjas.com/studio/problems/minimum-path-sum_985349?leftPanelTab=1


#include <bits/stdc++.h>

int solve(int row,int col,vector<vector<int>> &dp,vector<vector<int>> &grid){
    if(row==0&&col==0){
        return grid[row][col];
    }
    if(row<0||col<0){
        return 1e9;
    }
    if(dp[row][col]!=-1){
        return dp[row][col];
    }

    int up=grid[row][col]+solve(row-1,col,dp,grid);
    int left=grid[row][col]+solve(row,col-1,dp,grid);
    return dp[row][col]=min(up,left);
}

int minSumPath(vector<vector<int>> &grid) {
    int N=grid.size();
    int M=grid[0].size();
    vector<vector<int>> dp(N,vector<int> (M,-1));
    int ans=solve(N-1,M-1,dp,grid);
    return ans;
}
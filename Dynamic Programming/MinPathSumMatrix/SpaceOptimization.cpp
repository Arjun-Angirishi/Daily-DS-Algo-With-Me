//  https://www.codingninjas.com/studio/problems/minimum-path-sum_985349?leftPanelTab=1


#include <bits/stdc++.h>

int minSumPath(vector<vector<int>> &grid) {
    int N=grid.size();
    int M=grid[0].size();
    vector<int> prev (M,0);
    for(int i=0;i<N;i++){
        vector<int> curr(M,0);
        for(int j=0;j<M;j++){
            if(i==0&&j==0){
                curr[j]=grid[0][0];
            }else {
                int up=grid[i][j];
                if(i>0){
                    up+=prev[j];
                } else {
                    up += 1e9;
                }
                int left=grid[i][j];
                if(j>0){
                    left+=curr[j-1];
                } else {
                    left += 1e9;
                }
                curr[j]=min(up,left);
            }
            
        }
        prev=curr;
    }
    return prev[M-1];
}
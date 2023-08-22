//  https://practice.geeksforgeeks.org/problems/flood-fill-algorithm1856/1?page=1&category[]=Graph&sortBy=submissions


class Solution {
public:

    void dfs(vector<vector<int>>& image,vector<vector<int>> &ans,int sr,int sc,int newColor,int initColor){
        ans[sr][sc]=newColor;
        int n=image.size();
        int m=image[0].size();
        int delrow[]={1,0,-1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                int nrow=sr+delrow[i];
                int ncol=sc+delcol[i];
                if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&ans[nrow][ncol]==initColor&&ans[nrow][ncol]!=newColor){
                    dfs(image,ans,nrow,ncol,newColor,initColor);
                }
            }
        }
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> ans;
        ans=image;
        int initColor=image[sr][sc];
        dfs(image,ans,sr,sc,newColor,initColor);
        return ans;
    }
};
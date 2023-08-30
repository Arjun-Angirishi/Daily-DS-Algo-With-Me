// https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1

class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int col0=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    matrix[i][0]=1;
                    if(j!=0){
                        matrix[0][j]=1;
                    }else col0=1;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==1||matrix[0][j]==1){
                    matrix[i][j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(matrix[0][0]==1){
                matrix[0][i]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(col0==1){
                matrix[i][0]=1;
            }
        }
    }
};
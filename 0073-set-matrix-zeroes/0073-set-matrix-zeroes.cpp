class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> original=matrix;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(original[i][j]==0){
                    for(int c=0;c<m;c++) matrix[i][c]=0;
                    for(int r=0;r<n;r++) matrix[r][j]=0;
                }
            }
        }
    }
};
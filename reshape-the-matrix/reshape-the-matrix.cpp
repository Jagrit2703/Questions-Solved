class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int i=0;
        int count=0;
        int row=mat.size();
        int col=mat[i].size();
        vector<vector<int>>ans(r,vector<int>(c));
        if(row*col!=r*c){
            return mat;
        }
            for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans[count / c][count % c] = mat[i][j];
                count++;
            }
        }
        return ans;
    }
};
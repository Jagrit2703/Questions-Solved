class Solution {
public:
    bool isValid(vector<vector<char>>& grid, int i, int j){
        int m = grid.size(), n = grid[0].size();
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j] =='1' ) return true;
        return false;
    }
    void eraseIslands(vector<vector<char>>& grid, int i, int j) {
        grid[i][j] = '0';
        if(isValid(grid,i-1,j))
            eraseIslands(grid, i - 1, j);
        if(isValid(grid,i+1,j))
            eraseIslands(grid, i + 1, j);
        if(isValid(grid,i,j-1))
            eraseIslands(grid, i, j - 1);
        if(isValid(grid,i,j+1))
            eraseIslands(grid, i, j + 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    eraseIslands(grid, i, j);
                }
            }
        }
        return islands;
    }
};
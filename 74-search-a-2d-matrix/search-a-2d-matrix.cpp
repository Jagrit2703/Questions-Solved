class Solution {
public:
    void DFS(vector<vector<int>>& matrix, int target, int i, int j, vector<vector<bool>>& visited, bool& ans) {
        int n = matrix.size();
        int m = matrix[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || matrix[i][j] != target) {
            return;
        }
        if(matrix[i][j] == target) {
            ans = true;
            return;
        }
        visited[i][j] = true;
        DFS(matrix, target, i + 1, j, visited, ans);
        DFS(matrix, target, i - 1, j, visited, ans);
        DFS(matrix, target, i, j + 1, visited, ans);
        DFS(matrix, target, i, j - 1, visited, ans);
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans = false;
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == target) {
                    ans = true;
                    break;
                }
                DFS(matrix, target, i, j, visited, ans);
                if (ans) return ans;
            }
        }
        return ans;
    }
};

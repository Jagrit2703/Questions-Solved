class Solution {
public:
    void DFS(vector<vector<int>>& land, int i, int j, vector<int>& temp) {
        int n = land.size();
        int m = land[0].size();
        if (i < 0 || i == n || j < 0 || j == m || land[i][j] == 0) {
            return;
        }
        if (i > temp[2]) {
            temp[2] = i;
            temp[3] = j;
        } else if (i == temp[2] && j > temp[3]) {
            temp[3] = j;
        }
        land[i][j] = 0;
        DFS(land, i + 1, j, temp);
        DFS(land, i - 1, j, temp);
        DFS(land, i, j + 1, temp);
        DFS(land, i, j - 1, temp);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> coordinates;
        int n = land.size();
        int m = land[0].size();
        vector<vector<bool>> vis;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (land[i][j] == 1) {
                    vector<int> temp = {i, j, i, j};
                    DFS(land, i, j, temp);
                    coordinates.push_back(temp);
                }
            }
        }
        return coordinates;
    }
};
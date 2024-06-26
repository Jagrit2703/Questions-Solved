class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int row, int col,
    int source, int color) {
        if (sr < 0 || sr >= row || sc < 0 || sc >= col)
            return;

        if (image[sr][sc] != source)
            return;
        image[sr][sc] = color;
        dfs(image, sr - 1, sc, row, col, source, color);
        dfs(image, sr + 1, sc, row, col, source, color);
        dfs(image, sr, sc + 1, row, col, source, color);
        dfs(image, sr, sc - 1, row, col, source, color);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        int row = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        
        if (source == color)
            return image;
        dfs(image, sr, sc, row, col, source, color);

        return image;
    }
};
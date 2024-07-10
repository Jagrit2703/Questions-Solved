class Solution {
public:

    int findMin(vector<vector<int>>&grid, int n, int m,vector<vector<int>>&dp){
        if(n<0 || m<0){
            return INT_MAX;
        }
        else if(n==0 && m==0) return grid[0][0];
        if(dp[n][m]!=-1)return dp[n][m];
        int res = grid[n][m]+ min(findMin(grid,n-1,m,dp),findMin(grid,n,m-1,dp));
        dp[n][m] = res;
        return res;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int sum = INT_MAX;
        return findMin(grid,n-1,m-1,dp);
    }
};
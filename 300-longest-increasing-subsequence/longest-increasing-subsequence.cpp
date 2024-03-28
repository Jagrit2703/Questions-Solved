class Solution {
public:
    int solve(int ind, int prev, vector<int>& nums, vector<vector<int>>& dp) {
        if (ind == nums.size())return 0;

        if (dp[ind][prev + 1] != -1) {
            return dp[ind][prev + 1];
        }
        
        int nottake = solve(ind + 1, prev, nums, dp);
        int take = 0;
        if (prev == -1 || nums[ind] > nums[prev]) {
            take = 1 + solve(ind + 1, ind, nums, dp);
        }
        return dp[ind][prev + 1] = max(nottake, take);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

        return solve(0, -1, nums, dp);
    }
};
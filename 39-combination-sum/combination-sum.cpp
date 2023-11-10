class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        /*
        1.can memoization be applied ?
        2.recursive call karo to check and add the number, once the sum==target push them back into a vector<vector<int>>;
        */
        vector<vector<vector<int>>> dp(target + 1);
        for (auto &num: candidates) {
            for (int i = 1; i <= target; i++) {
                if (i == num) {
                    dp[i].push_back({num});
                } else if (i > num) {
                    for (auto vec: dp[i - num]) {
                        vec.push_back(num);
                        dp[i].push_back(vec);
                    }
                }
            }
        }

        return dp[target];
    }
};
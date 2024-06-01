class Solution {
public:
    vector<vector<int>> result;
void solve(vector<int>& nums, int ind) {
        int n = nums.size();
        unordered_set<int>st;
        if(ind == n) {
            result.push_back(nums);
            return;
        }
        
        for(int i = ind; i<n; i++) {
            if(st.find(nums[i]) == st.end()) {
            st.insert(nums[i]);
            swap(nums[i], nums[ind]);
            solve(nums, ind + 1);
            swap(nums[i], nums[ind]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int ind = 0;
        solve(nums, ind);
        return result;
    }
};
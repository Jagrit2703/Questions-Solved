class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int ind) {
        int n = nums.size();
        unordered_set<int>st;
        if(ind==n){
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < n; i++) {
            if(st.find(nums[i])!=st.end()){
                continue;
            }
            st.insert(nums[i]);
            swap(nums[i], nums[ind]);
            solve(nums, ind + 1);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int ind;
        solve(nums, 0);
        return ans;
    }
};
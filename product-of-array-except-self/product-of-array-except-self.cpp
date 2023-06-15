class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        for (int i = 0; i < nums.size() - 1; ++i) {
            res[i + 1] = nums[i] * res[i]; 
        }
        int endProduct = 1;
        for (int j = nums.size() - 1; j > 0; --j) {
            endProduct *= nums[j];
            res[j - 1] *= endProduct;
        }
        return res;
    }
};
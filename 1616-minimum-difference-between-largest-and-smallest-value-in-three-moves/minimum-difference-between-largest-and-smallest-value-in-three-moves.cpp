class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<5)return 0;
        sort(nums.begin(),nums.end());
        int j = n-4;
        int i = 0;
        int diff = INT_MAX;
        while(j<n){
            diff = min(diff,nums[j++]-nums[i++]);
        }
        return diff;
    }
};
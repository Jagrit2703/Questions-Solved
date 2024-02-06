class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> missingnums;
        int i = 0;
        while (i < n) {
            int currInd = nums[i]-1;
            if(nums[i] != nums[currInd]) swap(nums[i],nums[currInd]);
            else i++;
        }
        for (int i = 0; i < n; i++) {
            if(nums[i]!=i+1){
            missingnums.push_back(i+1);
            }
        }
        return missingnums;
    }
};
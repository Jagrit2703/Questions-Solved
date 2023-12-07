class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()){
            int correct = nums[i] - 1;
            if(nums[correct] != correct-1 && nums[correct] != nums[i]) swap(nums[correct],nums[i]);
            else i++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]-1 != i)
            return nums[i];
        }
        return -1;
    }
};
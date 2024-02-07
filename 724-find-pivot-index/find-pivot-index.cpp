class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long right = 0;
        long long left = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            right += nums[i];
        }

        for(int i = 0; i<n; i++){
            right -= nums[i];
            if(left == right){
                return i;
            }
            left += nums[i];
        }
        return -1;    
    }
};
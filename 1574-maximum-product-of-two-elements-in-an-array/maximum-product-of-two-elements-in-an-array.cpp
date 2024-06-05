class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // brute mei use two pointers i and j 
        // array sorted ? n-1 & n-2 product : sort
        // contains only positive ?
        int ans = 0;
        int n = nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i = n-1; i>=0; i--){
            ans = (nums[n-1]-1)*(nums[n-2]-1);
        } 
        return ans;
    }
};
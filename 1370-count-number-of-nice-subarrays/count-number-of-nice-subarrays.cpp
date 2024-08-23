class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0, prevcount = 0, oddcount = 0, result = 0;
        while (j < n) {
            if (nums[j] % 2 != 0) {
                oddcount++;
                prevcount = 0;
            }
            while(oddcount == k) {
                prevcount++;
                if (i<n && nums[i] % 2 == 1) {
                    oddcount--;
                }
                i++;
            }
            result += prevcount;
            j++;
        }

        return result;
    }
};
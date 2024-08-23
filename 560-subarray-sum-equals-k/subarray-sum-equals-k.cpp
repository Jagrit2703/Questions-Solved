class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hashtable;
        hashtable[0] = 1;
        int cumSum = 0, count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            cumSum += nums[i];
            count += hashtable[cumSum-k];
            hashtable[cumSum]++;
        }
        return count;
    }
};
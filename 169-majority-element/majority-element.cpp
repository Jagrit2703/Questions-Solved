class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len=nums.size();
        unordered_map<int,int> mp;
        for(auto n:nums){
            mp[n]++;
        }
        for(auto it : mp){
            if(it.second > len/2){
                return it.first;
            }
        }
        return 0;
    }
};
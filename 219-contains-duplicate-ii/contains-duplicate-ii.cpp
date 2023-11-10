class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //can make a set or a map, i am using map
        unordered_map<int,int>mpp;
        int i=0,j=0;
        for(;j<nums.size();j++){
            if(j>k){
                mpp[nums[i++]]--;
            }
            if(mpp[nums[j]]>0){
                return true;
            }
            mpp[nums[j]]++;
        }
        return false;
    }
};
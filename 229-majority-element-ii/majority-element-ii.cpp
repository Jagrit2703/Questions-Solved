class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = n/3;
        unordered_map<int,int>mpp;
        for(int i = 0; i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for(auto m : mpp){
            if(m.second > k){
                ans.push_back(m.first);
            }
        }
        return ans;
    }
};
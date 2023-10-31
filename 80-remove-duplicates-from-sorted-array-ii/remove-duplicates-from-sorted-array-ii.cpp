class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        nums.clear();
        for(auto i:mp){
            if(i.second>=2){
                nums.emplace_back(i.first);
                nums.emplace_back(i.first);
            }
            else{
                nums.emplace_back(i.first);
            }
        }
        return nums.size();
    }
};
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
                nums.push_back(i.first);
                nums.push_back(i.first);
            }
            else{
                nums.push_back(i.first);
            }
        }
        return nums.size();
    }
};
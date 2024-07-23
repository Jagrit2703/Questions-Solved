class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //can be done by using a map or a binary search or using two for loops
        map<int,int>mpp;
        for(int i : nums){
            mpp[i]++;
        }
        int ans = 0;
        for(auto i : mpp){
            if(i.second < 2){
                ans = i.first;
            }
        }
        return ans;
    }
};
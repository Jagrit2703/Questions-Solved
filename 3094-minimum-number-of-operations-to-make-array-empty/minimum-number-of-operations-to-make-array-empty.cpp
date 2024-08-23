class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        int res = 0;
        for(auto it:mp){
            if(it.second == 1){
                return -1;
            }
            else if(it.second%3==0){
                res += it.second/3;
            }else if(it.second%3==2){
                res += ((it.second-2)/3)+1;
            }else{
                res += ((it.second-4)/3)+2;
            }
        }
        return res;
    }
};
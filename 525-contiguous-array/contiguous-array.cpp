class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0,sum=0;
        for(int &i:nums){
            if(i==0)
            i=-1;
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==0){
                ans=i+1;
            }
            if(mpp.count(sum)){
                ans=max(ans,i-mpp[sum]);
            }
            if(mpp.count(sum)==0){
                mpp[sum]=i;
            }
        }
        return ans;
    }
};
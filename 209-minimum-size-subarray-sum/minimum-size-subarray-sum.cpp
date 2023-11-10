class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0;
        int min_len=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum<target){
                j++;
            }
            if(sum>=target){
                while(sum>=target){
                    min_len=min(min_len,j-i+1);
                    sum-=nums[i];
                    i++;
                }
                j++;
            }
        }
        return (min_len==INT_MAX)?0:min_len;
    }
};
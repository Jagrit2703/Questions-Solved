class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            int cInd=nums[i]-1;
            if(nums[i]!=nums[cInd]){
                swap(nums[i],nums[cInd]);
            }
            else i++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
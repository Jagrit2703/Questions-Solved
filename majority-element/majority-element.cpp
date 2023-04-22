class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int i=0;
        // int n=nums.size();
        // int count=0;
        // // sort(nums.begin(),nums.end());
        // for(;i<n;i++){
        //     if(count==0){
        //         return nums[i];
        //         count++;
        //     }
        // }
        // return nums[i-1];
        int k=nums.size()/2;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        return nums[n/2];
        
    }
};
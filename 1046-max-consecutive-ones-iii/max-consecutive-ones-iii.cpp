class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0, i = 0, j = 0, max1 = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]==0){
                k--;
            }
            max1++;
            while(k<0){
                if(nums[j]==0)k++;
                max1--;
                j++;
            }
            ans = max(max1,ans);
            
        }
        return ans;
    }
};
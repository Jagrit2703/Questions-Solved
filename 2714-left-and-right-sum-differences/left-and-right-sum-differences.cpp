class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftarr;
        leftarr.push_back(0);
        int n = nums.size();
        for(int i = 0; i<n-1;i++){
            int temp = leftarr[i]+nums[i];
            leftarr.push_back(temp);
        }
        vector<int>rightarr;
        rightarr.push_back(0);
        for(int i = n-1; i>0; i--){
            int temp = nums[i]+rightarr.back();
            rightarr.push_back(temp);
        }
        sort(rightarr.begin(),rightarr.end(),greater<int>());
        vector<int>ans;
        for(int i = 0; i<n; i++){
            ans.push_back(abs(leftarr[i]-rightarr[i]));
        }
        return ans;
    }
};
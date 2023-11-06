class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int end = n-1;
        int start = 0;
        int mid=0;
        while(start <= end){
            mid = (end + start)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};
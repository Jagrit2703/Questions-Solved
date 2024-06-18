class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto &i : nums2){
            nums1.push_back(i);
        }
        int n = nums1.size();
        long median = 0.00;
        sort(nums1.begin(),nums1.end());

        if(n%2==1){
            return static_cast<double>(nums1[n / 2]);
        }
        else{
            int middle1 = nums1[n / 2 - 1];
            int middle2 = nums1[n / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }
    }
};
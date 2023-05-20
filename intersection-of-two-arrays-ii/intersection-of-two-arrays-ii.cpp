class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int>vec;
    unordered_map<int,int>nm1,nm2;
    for(int i:nums1){
        nm1[i]++;
    }
    for(int i:nums2){
        nm2[i]++;
    }
    for (int i : nums2) {
            if (nm1.count(i) && nm1[i] > 0) {
                vec.push_back(i);
                nm1[i]--;
                if (nm1[i] == 0) {
                    nm1.erase(i);
                }
            }
        }

        return vec;
    }
};
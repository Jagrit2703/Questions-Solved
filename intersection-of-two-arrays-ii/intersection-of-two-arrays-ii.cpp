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
    for (auto pair:nm1){
        int i=pair.first;
        int freq=pair.second;
        if (nm2.count(i) && nm2[i] > 0) {
                for (int j = 0; j < min(freq, nm2[i]); j++) {
                    vec.push_back(i);
                }
            }
        }
        return vec;
    }
};
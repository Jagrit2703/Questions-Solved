class Solution {
public:
bool allZeros(vector<int>&indices){
    for(int &i : indices){
        if(i != 0) return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int>indices(26,0);
        for(char&ch : p){
            indices[ch-'a']++;
        }
        int i=0;
        int j=0;
        vector<int>ans;
        while(j<n){
            indices[s[j] -'a']--;
            if(j-i+1==k){
                if(allZeros(indices)){
                    ans.push_back(i);
                }
                indices[s[i] -'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};
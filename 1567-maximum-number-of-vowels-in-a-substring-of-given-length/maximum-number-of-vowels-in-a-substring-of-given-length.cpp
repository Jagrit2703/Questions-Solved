class Solution {
public:
    int maxVowels(string s, int k) {
        vector<char>vowels = {'a','e','i','o','u'};
        unordered_map<char,int>vow;
        for(auto i : vowels){
            vow[i]++;
        }
        int ans = 0, curr = 0;
        for(int i = 0; i<s.size(); i++){
            if(i < k){
                curr += vow.count(s[i]);
            }
            else {
                curr += vow.count(s[i]) - vow.count(s[i-k]);
            }
            ans = max(ans,curr);
        }
        return ans;
    }
};
class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0;
        int j = 0;
        int k = 3;
        int count = 0;
        unordered_map<char,int>mp;
        while(j < s.size()){
            mp[s[j]]++;
            if(j - i + 1 < k){
                j++;
            }
            else if(j-i+1 == k){
                if(mp.size() == k) count++;
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return count;
    }
};
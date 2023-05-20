class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>sm,tm;
        for(char c:s){
            sm[c]++;
        }
        for(char c:t){
            tm[c]++;
        }
        if(s.length()!=t.length()){
            return false;
        }
            for(auto pair:sm){
                char c=pair.first;
                int freq=pair.second;
                if(tm[c]!=freq)return false;
            }
        return true;
    }
};
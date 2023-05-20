class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rn,mag;
        int n=magazine.length();
        for (char c:ransomNote){
            rn[c]++;
        }
        for(char c:magazine){
            mag[c]++;
        }
         for (auto pair : rn) {
            char c = pair.first;
            int freq = pair.second;
            
            if (freq > mag[c]) {
                return false;
            }
        }
        return true;
    }
};

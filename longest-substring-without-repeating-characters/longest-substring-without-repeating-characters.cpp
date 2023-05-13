class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        // use a map to store the index of each character
        unordered_map<char, int> mp;
        // initialize the start index of the current substring to 0
        int start = 0;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            // if the character is already in the map and its index is greater than or equal to start,
            // update the start index to the next index of the repeating character
            if (mp.count(c) && mp[c] >= start) {
                start = mp[c] + 1;
            }
            // update the index of the current character in the map
            mp[c] = i;
            // update the maximum length of the non-repeating substring
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxi = 0;
        int start = 0;
        int end = 0;
        while (start < s.size()) {
            if (st.find(s[start]) == st.end()) {
                //creating window
                if (start - end + 1 > maxi)
                    maxi = start - end + 1;
                st.insert(s[start]);
                start++;

            } else {
                st.erase(s[end]);
                end++;
            }
        }
        return maxi;
    }
};
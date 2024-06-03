class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0, l = 0, r = 0;
        while (i < s.size()) {
            while (i < s.size() && s[i] != ' ') {
                s[r++] = s[i++];
            }
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        s = s.substr(0, r - 1);
        return s;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        int i = 0;
        string str;
        while (i < h) {
            int j = 0;
            while (j < n) {
                if (haystack[i] == needle[j]) {
                    str = haystack.substr(i, n);
                    if (str == needle)return i;
              
                }
                j++;
            }
            i++;
        }
        return -1;
    }
};
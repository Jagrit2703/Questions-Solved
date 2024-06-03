class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        int i = 0;
        string str;
        while(i<h){
            if(haystack[i]==needle[0]){
                str = haystack.substr(i,n);
                if(str == needle) return i;
            }
            i++;
        }
        return -1;
    }
};
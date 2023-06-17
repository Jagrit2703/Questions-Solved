class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        int Index = 0;
        for(int i=0; i<h; i++){
            if(haystack[i]==needle[Index]){
                Index++;
            }
            else{
                i=i-Index;
                Index=0;
            }
            if(Index==n){
                return i-n+1;
            }
        }
        return -1;
    }
};
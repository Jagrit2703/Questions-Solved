class Solution {
public:
    bool isSubsequence(string s, string t) {
    int i=0;
    int j=0;
    if(s.empty()&&t.empty()){
        return true;
    }
    if(s.empty()){
        return true;
    }
    while(i<s.length()&&j<t.length()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }
    if(i==s.length()){
        return true;
    } 
    return false;
    }
};
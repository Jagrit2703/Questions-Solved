class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0, i = 0, j = 0;
        vector<int>v(3,0);
        while(j<s.size()){
            v[s[j]-'a']++;
            while(v[0]>0 && v[1]>0 && v[2]>0 && i<=j){
                v[s[i]-'a']--;
                count+=(s.length()-j);
                i++;
            }
            j++;
        }
        return count;
    }
};
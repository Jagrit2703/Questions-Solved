class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool ans=true;
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char> m;
        unordered_map<char,char> m2;
        for(int i=0;i<s.size();i++){
            auto itr=m.find(s[i]);
            if(itr!=m.end()){
                if(itr->second!=t[i]){
                    ans=false;
                }
            }
            else{
                m[s[i]]=t[i];
            }
        }
        for(int i=0;i<s.size();i++){
            auto itr2=m2.find(t[i]);
            if(itr2!=m2.end()){
                if(itr2->second!=s[i]){
                    ans=false;
                }
            }
            else{
                m2[t[i]]=s[i];
            }
        }
        return ans;
    }
};
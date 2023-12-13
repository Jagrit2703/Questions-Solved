class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        if(n1!=n2) return false;
        map<int,int>mp1,mp2;
        for(auto i:word1)
        {
            mp1[i]++;
        }
        for(auto i:word2 )
        {
            mp2[i]++;
        }

        for(auto i:word1)
        {
            if(!mp2[i])return false;
        }

        vector<int>v1,v2;
        for(auto i:mp1)
        {
            v1.push_back(i.second);

        }
        for(auto i:mp2)
        {
            v2.push_back(i.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2) return true;
        else return false;
    }
};
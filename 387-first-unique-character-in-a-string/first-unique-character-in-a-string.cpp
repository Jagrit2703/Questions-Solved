class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int>p(26, 0);
        for(int  i = 0;i<s.length();i++)
        {
            int k = s[i] -'a';
            p[k]++;
        }
        for(int i = 0;i<s.length();i++)
        {
            int t = s[i]-'a';
            if(p[t]==1)
            {
                return i;
            }
        }
        return -1;
    }
};
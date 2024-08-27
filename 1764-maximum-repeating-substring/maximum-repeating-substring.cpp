class Solution {
public:
    int maxRepeating(string a, string b) {
        string s = b + "#" + a;
        int n = s.size(), nb = b.size();

        vector<int> lps(n + 1, 0);
        lps[0] = -1;
        
        int i = 0, j = -1;

        while(i < n){
            while(j != -1 and s[i] != s[j]) j = lps[j];
            lps[++i] = ++j;
        }
        
        int ans = 0;
        for(int i = 0; i <= n; i++){
            if(lps[i] == nb){
                int len = 0, j = i;
                while(j <= n and lps[j] == nb) i = j, j += nb, len++;
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
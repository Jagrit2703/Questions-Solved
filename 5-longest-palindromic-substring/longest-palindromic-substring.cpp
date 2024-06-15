class Solution {
public:

    bool helper(string &s, int i, int j,vector<vector<int>>& dp){
        if(i>=j)return 1;  
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==s[j]) return dp[i][j] = helper(s,i+1,j-1,dp);

        return dp[i][j]=0;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        if(n<=1) return s;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int sp = 0; 
        int maxlen = 1;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                if(helper(s,i,j,dp)){
                    if(j-i+1>maxlen){
                        maxlen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp, maxlen);
    }
};
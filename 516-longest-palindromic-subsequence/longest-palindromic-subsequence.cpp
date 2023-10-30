class Solution {
public:
    int solve(string& s,int i,int j,vector<vector<int>>&dp)
    {
        if(i>=s.length()||j<0)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int ans=0;
        if(s[i]==s[j])
        {
            ans=solve(s,i+1,j-1,dp)+1;
        }
        else{
            ans=max(solve(s,i+1,j,dp),solve(s,i,j-1,dp));
        }
        return dp[i][j]=ans;
    }
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>dp(s.length()+1,(vector<int>(s.length()+1,-1)));
        return solve(s,0,s.length()-1,dp);

    }
};
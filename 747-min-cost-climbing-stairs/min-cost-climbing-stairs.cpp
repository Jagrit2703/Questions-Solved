class Solution {
public:
int ways(int n,vector<int>&cost,vector<int>&dp)
{
    if(n==0) return cost[n];
    if(n==1) return cost[n];

    if(dp[n] != -1) return dp[n]; 
    int onestep=ways(n-1,cost,dp)+cost[n];
    int twostep=ways(n-2,cost,dp)+cost[n];

    dp[n]=min(onestep,twostep);
    return dp[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int one=ways(n-1,cost,dp);
        int two=ways(n-2,cost,dp);
        return min(one,two);
    }
};
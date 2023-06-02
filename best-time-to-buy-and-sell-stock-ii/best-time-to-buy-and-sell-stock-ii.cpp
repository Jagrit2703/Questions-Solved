class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxPro = 0;
    for(int i = 1; i < prices.size(); i++){
        maxPro += max(prices[i] - prices[i-1],0);
        cout<<maxPro;
    }
    return maxPro;
    }
};
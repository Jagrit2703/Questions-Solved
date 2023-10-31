class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //case 1
        int buy=prices[0];
        int sell=0;
        for(int i : prices){
            if(i<buy){
                buy=i;
            }else{
            sell=max(i-buy,sell);
            }
        }
        return sell;
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> sol;
    int maxi = candies[0];
        for(auto i : candies){
            maxi = max(maxi,i);
        }
    for(int i=0;i<candies.size();i++){
        if(extraCandies+candies[i]>=maxi){
            sol.push_back(true);
        }
        else{
            sol.push_back(false);
        }
    } 
    return sol;
    }
};
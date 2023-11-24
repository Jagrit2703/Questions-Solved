class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost_map;
        vector<int>lostonce;
        vector<int>notLost;
        for(auto &i:matches){
            int loser=i[1];
            lost_map[loser]++;
        }
        for(auto &i:matches){
            int winner=i[0];
            int loser=i[1];
            if(lost_map.find(winner)==lost_map.end()){
                notLost.push_back(winner);
                lost_map[winner]=2;
            }
            if(lost_map[loser]==1){
                lostonce.push_back(loser);
            }
        }
        sort(notLost.begin(),notLost.end());
        sort(lostonce.begin(),lostonce.end());
        return {notLost,lostonce};
    }
};
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int Csize = customers.size();
        double totalW = customers[0][1];
        int finishPrev = customers[0][0]+customers[0][1];
        for (int i = 1; i < Csize; i++) {
            int arrive = customers[i][0];
            int startCook = max(arrive,finishPrev);
            int end = startCook + customers[i][1];
            finishPrev = end;
            totalW += end - arrive;
        }
        return totalW/Csize;
    }
};
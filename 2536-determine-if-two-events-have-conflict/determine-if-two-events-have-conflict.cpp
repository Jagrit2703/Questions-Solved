class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        // if mere first event ka end time >= start time of second event return true
        // if mere first event ka end time < start time of second event return false
        if(event1[0]<=event2[0] && event2[0]<=event1[1] || event2[0]<=event1[0] && event1[0]<=event2[1]) return true;
        return false;    
    }
};
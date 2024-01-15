class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count, i = 0, j = 1; 
        int n = intervals.size();
        while(j<n){
            vector<int>current = intervals[i];
            vector<int>next = intervals[j];

            int cs = current[0];
            int ce = current[1];

            int ns = next[0];
            int ne = next[1];

            if(ce <= ns){
                i=j;
                j++;
            }
            else if(ce <= ne){ //overlap
                j++;
                count++;
            }
            else if( ce > ne){
                i=j;
                j++;
                count++;
            }
        }
        return count;
    }
};
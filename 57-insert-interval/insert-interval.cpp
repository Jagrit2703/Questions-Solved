class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());

        int a = intervals[0][0];
        int b = intervals[0][1];

        for(auto v : intervals){
            if(v[0]>b){
                ans.push_back({a,b});
                a = v[0];
                b = v[1];
            }
            else if(v[1]>b) b = v[1];
        }
        ans.push_back({a,b});
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if (intervals.size() == 1) {
            return intervals;
        }
        vector<pair<int, int>> p;
        for (int i = 0; i < intervals.size(); i++) {
            p.push_back({intervals[i][0], intervals[i][1]});
        }
        sort(p.begin(), p.end());
        int a = p[0].first;
        int b = p[0].second;
        for (int i = 0; i < p.size() - 1; i++) {
            vector<int> temp(2);
            if (b >= p[i + 1].first) {
                b = max(b, p[i + 1].second);
            } else {
                temp[0] = a;
                temp[1] = b;
                a = p[i + 1].first;
                b = p[i + 1].second;
                ans.push_back({temp});
            }
        }
        ans.push_back({a, b});
        return ans;
    }
};
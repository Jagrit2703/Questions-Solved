class Solution {
public:
    string reorganizeString(string s) {
        vector<int> count(26, 0);
        int n = s.size();
        priority_queue<pair<int, char>> pq;

        for (char& ch : s) {
            count[ch - 'a']++;
            if (count[ch - 'a'] > (n+1) / 2)
                return "";
        }
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (count[ch - 'a'] > 0) {
                pq.push({count[ch - 'a'], ch});
            }
        }
        string result = "";
        while (pq.size() >= 2) {
            auto freq1 = pq.top();
            pq.pop();
            auto freq2 = pq.top();
            pq.pop();
            result.push_back(freq1.second);
            freq1.first--;
            result.push_back(freq2.second);
            freq2.first--;
            if (freq1.first > 0) {
                pq.push(freq1);
            }
            if (freq2.first > 0) {
                pq.push(freq2);
            }
        }
        if (!pq.empty()) {
            result.push_back(pq.top().second);
        }
        return result;
    }
};
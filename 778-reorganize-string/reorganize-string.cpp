class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>count;
        int n = s.size();
        priority_queue<pair<int, char>> pq;

        for (char& ch : s) { 
            count[ch]++;
        }
        for (auto i : count) {
            pq.push(make_pair(i.second,i.first));
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
            if(pq.top().first > 1)
                return "";
            else
                result+=pq.top().second;
        }
        return result;
    }
};
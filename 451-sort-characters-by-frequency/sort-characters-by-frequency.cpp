class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto it : freq) {
            pq.push({it.second, it.first});
        }
        string result = "";
        while (!pq.empty()) {
            auto cur = pq.top();
            pq.pop();
            while (cur.first--)
                result += cur.second;
        }
        return result;
    }
};
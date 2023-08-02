class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(), s.end());
        double sum = 0; double avg = 0.00000;
        for (int i = 1; i < s.size() - 1; i++) {
            sum += s[i];
        }
        avg = sum / (s.size() - 2);
        return avg;
    }
};
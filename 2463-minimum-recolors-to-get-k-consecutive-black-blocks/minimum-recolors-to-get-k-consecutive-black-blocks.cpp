class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int ans = INT_MAX;
        while (i < blocks.size()) {
            if (blocks[i] == 'W') count++;
            if (i - j + 1 == k) {
                ans = min(ans, count);
                if (blocks[j] == 'W') count--;
                j++;
            }
            i++;
        }
        return ans;
    }
};
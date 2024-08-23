class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        // ek sorted array, ek original, we compare the values of the indices and if the value is not same then we left shift the array and increment the count of moves 
        //worst case ke ek sorted array ko sort kara and found out all elements are in the same place so total moves is the size of the array
        const int n = nums.size();
        vector<int> sorted(n);
        for (int i = 0; i < n; ++i) {
            sorted[i] = i;
        }
        sort(sorted.begin(), sorted.end(), [&](const int x, const int y) {
            return nums[x] < nums[y];
        });
        int m = n;
        long long r = 0;
        for (int i = 1; i < n; i++) {
            if (sorted[i] < sorted[i - 1]) {
                r += m;
                m = n - i;
            }
        }
        r += m;
        return r;
    }
};
class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(n+1,0);
        v[0] = v[1] = 1;

        for(int c1=2;c1<=n;c1++){
            v[c1] = v[c1-1]+v[c1-2];
        }

        return v[n];
    }
};
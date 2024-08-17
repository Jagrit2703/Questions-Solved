class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int count = 0, sum = 0, j = 0;
        for(int i = 0; i<s.size();i++){
            sum+=abs(s[i]-t[i]);
            while(sum>maxCost){
                sum-=abs(s[j]-t[j]);
                j++;
            }
            count = max(count,i-j+1);
        }
        return count;
    }
};
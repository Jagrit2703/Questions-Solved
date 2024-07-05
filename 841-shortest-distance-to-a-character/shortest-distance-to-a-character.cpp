class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int start = 0, end = 0; 
        int len = s.size();
        vector<int>ans(len,INT_MAX);
        bool flag = false;
        while(start <= end && end < len){
            if(flag){
                ans[end] = end-start+1;
            }
            while(start<=end && s[end]==c){
                flag = 1;
                ans[start] = min(ans[start],end-start);
                start++;
            }
            end++;
        }
        return ans;
    }
};
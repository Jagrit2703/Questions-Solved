class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(st.empty()){
                if(s[i] != '*') st.push(s[i]);
            }
            else if(s[i] != '*') st.push(s[i]);
            else st.pop();
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
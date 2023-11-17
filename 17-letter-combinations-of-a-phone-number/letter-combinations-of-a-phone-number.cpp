class Solution {
public:
    string subset;
    vector<string>ans;
     unordered_map<char,string>mp;
    
    void f(int i,string digits){
        if(i>=digits.size()){
            ans.push_back(subset);
            return;
        }
            char t=digits[i];
            for(auto &it:mp[t]){
                subset.push_back(it);
                f(i+1,digits);
                subset.pop_back();
            }
        }
        
    
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
         mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        f(0,digits);
        return ans;  
    }
};
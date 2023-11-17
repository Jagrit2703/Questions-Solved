class Solution {
public:
    void find(int index, string &digits, vector<string>&output, string &s, map<char,string>&mpp){
        if(index == digits.size()){
            output.push_back(s);
            return;
        }
        string t = mpp[digits[index]];
        for(int i=0;i<t.size();i++){
            s+=t[i];
            find(index+1,digits,output,s,mpp);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>output;
        string s;
        if(digits.size()==0){
            return output;
        }
        map<char,string>mpp;
        mpp['2']="abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";
        find(0, digits, output, s, mpp);
        return output;
    }
};
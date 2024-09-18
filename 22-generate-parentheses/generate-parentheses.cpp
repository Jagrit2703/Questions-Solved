class Solution {
public:
    vector<string>ans;
    void generateString(int n, int left, int right,string temp){
        if(left==right && left+right==n*2){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            generateString(n,left+1,right,temp+"(");
        }
        if(right<left){
            generateString(n,left,right+1,temp+")");
        }

    }
    vector<string> generateParenthesis(int n) {
        string temp = "";
        generateString(n,0,0,temp);
        return ans;
    }
};
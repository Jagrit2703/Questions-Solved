class Solution {
public:
    void find(int k, int n, vector<vector<int>>&ans, vector<int>&combination, int start){
        if(k == combination.size()){
            if(n == 0) ans.push_back(combination);
            return;
        }
        for(int i = start; i <= 9; i++){
            combination.push_back(i);
            find(k,n-i,ans,combination,i+1);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>combination;
        find(k, n,ans, combination, 1);
        return ans;
    }
};
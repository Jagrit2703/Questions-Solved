class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& candidates, int target,int ind,int total,vector<int>&temp){
        if(total==target){
            ans.push_back(temp);
            return;
        }
        if(total>target || ind>=candidates.size()) return;
        temp.push_back(candidates[ind]);
        solve(candidates,target,ind,total+candidates[ind],temp);
        temp.pop_back();
        solve(candidates,target,ind+1,total,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        int n = candidates.size();
        solve(candidates,target,0,0,temp);
        return ans;
    }
};
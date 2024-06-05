class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int, vector<int>, greater<int>>q;
        for(auto &i : nums){
            q.push(i);
        }
        while(q.size()){
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            ans.push_back(second);
            ans.push_back(first);
        }
        return ans;
    }
};
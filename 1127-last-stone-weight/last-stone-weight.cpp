class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1){
            return stones[0];
        }

        priority_queue<int> q(stones.begin(), stones.end());

        while(q.size() > 1){
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            if(x != y){
                q.push(x-y);
            }
        }
        if(q.empty()){
            return 0;
        }
        return q.top();
    }
};
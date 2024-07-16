class Solution {
public:
    int maxProduct(vector<int>& nums) {
         priority_queue<int>mh;
        for(int i : nums){
            mh.push(i);
        }
        int prod = 1;
        while(!mh.empty()){
            int num1 = mh.top();
            mh.pop();
            int num2 = mh.top();
            mh.pop();
            prod = (num1-1)*(num2-1);
            break;
        }
        return prod;
    }
};
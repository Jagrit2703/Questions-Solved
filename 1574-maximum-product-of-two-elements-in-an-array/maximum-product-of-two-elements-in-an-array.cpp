class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> maxHeap;

        for(int i=0; i<nums.size(); i++)
        {
            maxHeap.push(nums[i]);
        }

        int x = maxHeap.top();
        maxHeap.pop();
        int y = maxHeap.top();
        return (x-1)*(y-1);
    }
};
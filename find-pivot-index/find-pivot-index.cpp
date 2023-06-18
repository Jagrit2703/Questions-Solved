class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int leftsum = 0;
        int rightsum = 0;
        
        for (int i = 0; i < size; i++) {
            rightsum += nums[i];
            cout<<rightsum<<" ";
        }
        
        for (int i = 0; i < size; i++) {
            rightsum -= nums[i];
            cout<<rightsum<<" ";
            
            if (leftsum == rightsum) {
                return i;
            }
            
            leftsum += nums[i];
            cout<<leftsum<<" ";
        }
        
        return -1;
    }
};


class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0, prod = 1;
        int n = nums.size();
        for(int i = 1; i<=n; i++){
            if(n%i == 0){
                prod = nums[i-1]*nums[i-1];
                sum += prod;
            }
        }
        return sum;
    }
};
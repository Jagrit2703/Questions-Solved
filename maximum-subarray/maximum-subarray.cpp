
class Solution {
public: 
int maxSubArray(const vector<int> &nums) {
  int max_sum = INT_MIN, init_sum = 0;
  for (int num:nums) {
    init_sum = max(num, init_sum + num);
    max_sum = max(max_sum, init_sum);
  }
  return max_sum;
}

};
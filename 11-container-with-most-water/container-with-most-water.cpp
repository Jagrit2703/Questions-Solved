class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int n = height.size();
        int j = n-1;
        int result = INT_MIN;
        while(i<j){
            int width = j-i;
            int h = min(height[i],height[j]);
            int area = width*h;
            result = max(result,area);

            if(height[i]>height[j]){
                j--;
            }
            else i++;
        }
        return result;
    }
};
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int sum = 0;
        int i = 0,j = 0;
        while(j<arr.size()){
            sum+=arr[j];
            if(j-i+1 == k){
                int val = sum/k;
                if(val >= threshold){
                    count++;
                }
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return count;
    }
};
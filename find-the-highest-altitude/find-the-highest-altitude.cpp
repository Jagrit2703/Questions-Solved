class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int currental=0;
    int maxal=currental;
    for (int i:gain){
        currental+=i;
        maxal=max(maxal,currental);
    }  
    return maxal;
    }
};
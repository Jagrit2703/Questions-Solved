class Solution {
public:
    int hIndex(vector<int>& citations) {
        int maxi = 0;
        int n = citations.size();
        sort(citations.begin(),citations.end());
        for(int i = 0; i < n; i++){
            if(citations[i] >= n-i){
                maxi = max(maxi,n-i);
            }
        }
        return maxi;
    }
};
class Solution {
public:
    int maxPower(string s) {
        int count = 0;
        int maxi = 0;
        for(int i = 1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                count++;
                if(count > maxi){
                    maxi = count;
                }
            }
            else {
                count = 0;
            }
        }
        return maxi+1;
    }
};
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i = 1;
        int res = 0;
        for(;i<=num/2;i++){
            if(num%i == 0){
                res+=i;
            }
        }
        return res == num;
    }
};
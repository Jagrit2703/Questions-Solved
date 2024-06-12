class Solution {
public:
    int addDigits(int num) {
        if (num < 2) {
            return num;
        }
        int sumOfDigits = 0;
        while (num > 9) {
            while (num) {
                sumOfDigits += num % 10;
                num = num / 10;
            }
            num = sumOfDigits;
            sumOfDigits = 0; 
        }
        return num;
    }
};
class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        long long temp = x;
        while(temp!=0){
            int digit = temp%10;
            reverse = reverse*10 + digit;
            temp= temp/10;
        }
        if(reverse>INT_MAX || reverse<INT_MIN) return 0;
        return reverse;
    }
};
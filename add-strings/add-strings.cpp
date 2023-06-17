class Solution {
public:
    string addStrings(string num1, string num2) {
    int size1 = num1.size();
    int size2 = num2.size();
    int maxSize = max(size1, size2);
    string result(maxSize, '0');
    int carry = 0;

    for (int i = 0; i < maxSize; ++i) {
        int digit1 = (i < size1) ? (num1[size1 - i - 1] - '0') : 0;
        int digit2 = (i < size2) ? (num2[size2 - i - 1] - '0') : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[maxSize - i - 1] = (sum % 10) + '0';
    }

    if (carry > 0) {
        result.insert(result.begin(), carry + '0');
    }

    return result;
    }
};
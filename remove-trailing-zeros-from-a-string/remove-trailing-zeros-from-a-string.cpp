class Solution {
public:
    string removeTrailingZeros(string num) {
    int n=num.size();
    int i;
    for(i=n-1;i>=0;i--){
        if(num[i]!='0'){
            break;
        }
    }
    return num.substr(0,i+1);
    }
};
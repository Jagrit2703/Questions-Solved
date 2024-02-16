class Solution {
public:
    int minimumRecolors(string s, int k) {
        int i=0,j=0,n=s.length(),cnt=0,minn=INT_MAX;
        while(j<n){
            if(s[j]=='W'){
                cnt++;
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                minn=min(minn,cnt);
                if(s[i]=='W'){
                    cnt--;
                }
                i++;
                j++;
            }
        }
        return minn;
    }
};
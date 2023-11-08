class Solution {
private:
    int LowerBound(int l, int r,vector<int> &potions,int minPotion)
    {
        int possibleIndex=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(potions[mid]>=minPotion)
            {
                possibleIndex=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return possibleIndex;
    }
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end()); 
        vector<int> ans;
        int maxPotionValue=potions[m-1];
        for(int i=0;i<n;i++)
        {
            int spell=spells[i];
            long long minPotion=ceil((1.0*success)/spell);
            if(minPotion>maxPotionValue)
            {
                ans.push_back(0);
                continue;
            }
            int index=LowerBound(0,m-1,potions,minPotion);
            int count=m-index;
            ans.push_back(count);
        }
        return ans;
    }
};
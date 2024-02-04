/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
    int maxsum=0;
    ListNode* current=head;
    vector<int>nums;
    while(current) {
        nums.push_back(current->val);
        current = current->next;
    }
    int i=0;int j=nums.size()-1;
    while(i<j){
        maxsum=max(maxsum,nums[i]+nums[j]);
        i++;
        j--;
    }
    return maxsum;
    }
};
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
    bool reverseList(ListNode* head, ListNode* &x){
        if(head != NULL) {
            bool ans = reverseList(head->next, x);
            if(head-> val == x->val) {
                x = x->next;
                return ans && true;
            }else {
                // no need to change x as final ans is false;
                x = x->next;
                return false;
            }
        }else return true;   
    }
    bool isPalindrome(ListNode* head) {     
        return reverseList(head, head);
    }
};
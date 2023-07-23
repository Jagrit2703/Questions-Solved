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
    bool flag;
    ListNode*Head;
    void checkpalindrome(ListNode* Revhead){
        if(Revhead==NULL){
            return;
        }
         checkpalindrome(Revhead->next);
         if(Revhead!=NULL){
             if(Revhead->val!=Head->val){
                 flag=false;
             }
             Head=Head->next;
         }
    }
    bool isPalindrome(ListNode* head) {
        flag=true;
        Head=head;
        checkpalindrome(head);
        return flag;
    }
};
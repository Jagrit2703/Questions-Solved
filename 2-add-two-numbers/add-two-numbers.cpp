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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode*dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int sum = 0;
            int digit1 = 0, digit2 = 0;
            if(l1!=NULL){
                digit1+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                digit2+=l2->val;
                l2=l2->next;
            }
            sum+=digit1+digit2+carry;
            int digit = sum%10;
            carry = sum/10;
            ListNode* newnode = new ListNode(digit);
            temp->next = newnode;
            temp=temp->next;
        }
        return dummy->next;
    }
};
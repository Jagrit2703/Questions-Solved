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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(head->next==NULL || head==NULL){
        return head;
    }  
    ListNode*curr=head;
    ListNode*prev=NULL;
    int count=0;
    if(left==1){
        ListNode* next=NULL;
        while(count<right){
            next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
        }
        head->next=curr;
        return prev;
    }
    while(count<left-1){
        prev=curr;
        curr=curr->next;
        count++;
    }
    ListNode*next=NULL;
    ListNode*prev2;
    ListNode*start=curr;
    while(count<right){
        next=curr->next;
        curr->next=prev2;
        prev2=curr;
        curr=next;
        count++;
    }
    prev->next=prev2;
    start->next=next;
    return head;
    }
};
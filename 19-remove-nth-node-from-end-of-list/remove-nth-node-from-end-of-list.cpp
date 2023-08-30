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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int cnt=0;

        while(curr!=NULL){
            curr=curr->next;
            cnt++;
        }

        if(cnt==n){
            return head->next;
        }

        int nodebefore=cnt-n-1;
        curr=head;
        for(int i=0;i<nodebefore;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;

        return head;
    }
};
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* p1=head;
        ListNode* p2=head;
        int count=0;
        while(p1!=NULL){
            p1=p1->next;
            count++;
        }
        int middle=count/2;
        for(int n=0;n<middle-1;n++){
            p2=p2->next;
        }
        p2->next=p2->next->next;
        return head;
    }
};
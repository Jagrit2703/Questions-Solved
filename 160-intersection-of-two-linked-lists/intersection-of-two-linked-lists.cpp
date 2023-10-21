/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> arr1; 
        vector<ListNode*> arr2; 
        ListNode * first = headA; 
        ListNode * second = headB; 

        while(first)
        {
            arr1.push_back(first); 
            first = first -> next; 
        }

        while(second)
        {
            arr2.push_back(second); 
            second = second -> next; 
        }

        ListNode * temp = NULL; 
        int m = arr1.size();
        int n = arr2.size(); 
        while(m && n)
        {
            if(arr1[m-1] == arr2[n-1]) temp = arr1[m-1]; 
            m --; 
            n --; 
        }
        return temp;    
    }
};
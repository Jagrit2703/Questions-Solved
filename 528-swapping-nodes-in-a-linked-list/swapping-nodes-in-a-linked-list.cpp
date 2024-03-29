class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int listLength = 0;
        ListNode* frontNode=head;
        ListNode* endNode=head;
        ListNode* currentNode = head;
        while (currentNode) {
            listLength++;
            if (listLength == k) {
                frontNode = currentNode;
            }
            currentNode = currentNode->next;
        }
        // endNode = head;
        for (int i = 1; i <= listLength - k; i++) {
            endNode = endNode->next;
        }
        swap(frontNode->val, endNode->val);
        return head;
    }
};
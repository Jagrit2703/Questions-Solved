/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return nullptr;
        }
        Node* leftNode = root->left;
        Node* rightNode = root->right;
        Node* nextNode = root->next;
        if(leftNode != NULL){
            leftNode->next = rightNode;
        }
        if(nextNode != NULL && rightNode != NULL){
            rightNode -> next = nextNode->left;
        }
        connect(leftNode);
        connect(rightNode);

        return root;
    }
};
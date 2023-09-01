class Solution {
public:
    bool validate(TreeNode* root, TreeNode* low, TreeNode* high) {

        if (root == nullptr) {
            return true;
        }

        if ((low != nullptr && root->val <= low->val) ||
            (high != nullptr && root->val >= high->val)) {
            return false;
        }

        return validate(root->right, root, high) &&
               validate(root->left, low, root);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int goodNodes(TreeNode* root) {
       
        dfs(root, INT_MIN);
        return count;

    }
    void dfs(TreeNode* root, int maxi){
        if(root == NULL) return;
        if(root->val >= maxi){
            count++;
            dfs(root->left, root->val);
            dfs(root->right, root->val);
        }

      
    else{
            dfs(root->left, maxi);
            dfs(root->right, maxi);
    }
        
    }
};
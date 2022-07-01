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
    bool isSymmetric(TreeNode* root) {
        return (!root) || dfs(root->left, root->right);
    }
    bool dfs(TreeNode* left, TreeNode* right) {
        return (!left && !right) || (left && right && left->val == right->val && dfs(left->left, right->right) && dfs(left->right, right->left));
    }
};
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
    bool isValidBST(TreeNode* root) {
        bool isBST;
        int min, max;
        dfs(root, isBST, min, max);
        return isBST;
    }
    void dfs(TreeNode* root, bool& isBST, int& min, int& max) {
        if (root == NULL) {
            isBST = true;
            return;
        }
        min = root->val;
        max = root->val;
        isBST = true;
        if (root->left) {
            bool isBST_left;
            int min_left, max_left;
            dfs(root->left, isBST_left, min_left, max_left);
            min = min_left;
            if (!isBST_left || max_left >= root->val) {
                isBST = false;
            }
        }
        if (root->right) {
            bool isBST_right;
            int min_right, max_right;
            dfs(root->right, isBST_right, min_right, max_right);
            max = max_right;
            if (!isBST_right || root->val >= min_right) {
                isBST = false;
            }
        }
    }
};
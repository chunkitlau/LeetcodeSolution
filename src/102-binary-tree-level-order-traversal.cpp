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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root) dfs(root, 0, result);
        return result;
    }
    void dfs(TreeNode* root, int dep, vector<vector<int>>& result) {
        if (dep + 1 <= result.size()) {
            result[dep].push_back(root->val);
        }
        else {
            vector<int> new_line;
            new_line.push_back(root->val);
            result.push_back(new_line);
        }
        if (root->left) {
            dfs(root->left, dep+1, result);
        }
        if (root->right) {
            dfs(root->right, dep+1, result);
        }
    }
};
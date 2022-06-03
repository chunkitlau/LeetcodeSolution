class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> perm;
        dfs(nums, perm, result);
        return result;
    }
    void dfs(vector<int> nums, vector<int> perm, vector<vector<int>> &result) {
        if (nums.empty()) {
            result.push_back(perm);
            return;
        }
        for (int k = 0, n = nums.size(); k < n; ++k) {
            perm.push_back(nums[k]);
            vector<int> new_nums(nums);
            new_nums.erase(new_nums.begin() + k);
            dfs(new_nums, perm, result);
            perm.pop_back();
        }
    }
};
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> list;
        dfs(0, nums, list, result);
        return result;
    }
    void dfs(int p, vector<int> nums, vector<int> list, vector<vector<int>> &result) {
        if (p == nums.size()) {
            result.push_back(list);
            return;
        }
        dfs(p+1, nums, list, result);
        list.push_back(nums[p]);
        dfs(p+1, nums, list, result);
    }
};
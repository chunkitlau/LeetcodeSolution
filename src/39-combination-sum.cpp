class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> selected;
        dfs(candidates, 0, target, selected, result);
        return result;
    }
    void dfs(vector<int>& candidates, int p, int target, vector<int> selected, vector<vector<int>> &result) {
        if (!target) {
            result.push_back(selected);
            return;
        }
        if ((p >= candidates.size()) || (target < candidates[p])) return;
        dfs(candidates, p+1, target, selected, result);
        while (target - candidates[p] >= 0) {
            selected.push_back(candidates[p]);
            target -= candidates[p];
            dfs(candidates, p+1, target, selected, result);
        }
    }
};
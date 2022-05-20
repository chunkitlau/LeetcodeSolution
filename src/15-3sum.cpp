class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0, n = nums.size(); i < n; ++i) {
            for (int j = i + 1, k = n - 1; j < k; ++j) {
                while ((j < k - 1) && (nums[i] + nums[j] + nums[k - 1] >= 0)) --k;
                if ((j < k) && (nums[i] + nums[j] + nums[k] == 0)) {
                    vector element = {nums[i], nums[j], nums[k]};
                    result.push_back(element);
                }
            }
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
};
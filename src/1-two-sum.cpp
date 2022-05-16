class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0, n = nums.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    vector<int> answer = {i, j};
                    return answer;
                }
            }
        }
        vector<int> answer = {};
        return answer;
    }
};
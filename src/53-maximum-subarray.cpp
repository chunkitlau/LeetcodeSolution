class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0], ans = current;
        for (int k = 1, n = nums.size(); k < n; ++k) {
            if (current >= 0) {
                current += nums[k];
            }
            else {
                current = nums[k];
            }
            ans = max(ans, current);
        }
        return ans;
    }
};
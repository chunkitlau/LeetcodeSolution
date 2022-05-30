class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) return;
        int n = nums.size(), p = n - 2;
        while ((p >= 0) && (nums[p] >= nums[p + 1])) --p;
        if (p < 0) {
            for (int i = 0, m = n / 2; i < m; ++ i) swap(nums[i], nums[n - i - 1]);
            return;
        }
        int q = p + 1;
        while ((q + 1 < n) && (nums[q + 1] > nums[p])) ++q;
        swap(nums[p], nums[q]);
        ++p;
        for (int i = 0; p + i < n - 1 - i; ++i) swap(nums[p + i], nums[n - 1 - i]);
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) {
            vector<int> result{-1, -1};
            return result;
        }
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] >= target) r = mid;
            else l = mid + 1;
        }
        int p = l;
        l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (nums[mid] <= target) l = mid;
            else r = mid - 1;
        }
        int q = l;
        if ((p <= q) && (nums[p] == target) && (nums[q] == target)) {
            vector<int> result{p, q};
            return result;
        }
        else {
            vector<int> result{-1, -1};
            return result;
        }
    }
};
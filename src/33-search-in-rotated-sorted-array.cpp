class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int l = 0, r = nums.size() - 1; l <= r;) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) return mid;
            else if (((nums[l] < nums[mid]) && (nums[l] <= target) && (target < nums[mid])) ||
                ((nums[mid] < nums[r]) && (!((nums[mid] < target) && (target <= nums[r]))))) r = mid - 1; 
            else l = mid + 1;
        }
        return -1;
    }
};
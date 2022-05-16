class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int> > nums_id(nums.size());
        for (int i = 0, n = nums.size(); i < n; ++i) {
            nums_id[i] = make_pair(nums[i], i);
        }
        sort(nums_id.begin(), nums_id.end());
        for (int i = 0, j = nums.size() - 1; i < j;) {
            if (nums_id[i].first + nums_id[j].first > target) --j;
            else if (nums_id[i].first + nums_id[j].first < target) ++i;
            else {
                vector<int> ans = {nums_id[i].second, nums_id[j].second};
                if (ans[0] > ans[1]) {
                    int temp = ans[0];
                    ans[0] = ans[1];
                    ans[1] = temp;
                }
                return ans;
            }
        }
        vector<int> ans = {};
        return ans;
    }
};

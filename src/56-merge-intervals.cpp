class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (!intervals.size()) return {};
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        int left = intervals[0][0], right = intervals[0][1];
        for (int k = 1, n = intervals.size(); k < n; ++k) {
            if (intervals[k][0] <= right) {
                right = max(right, intervals[k][1]);
            }
            else {
                result.push_back({left, right});
                left = intervals[k][0];
                right = intervals[k][1];
            }
        }
        result.push_back({left, right});
        return result;
    }
};
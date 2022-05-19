class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int n = nums1.size(), m = nums2.size(), mid1 = 0, mid2 = 0;
        for (int l = 0, r = n; l <= r;) {
            int i = (l + r) / 2, j = (n + m + 1) / 2 - i,
                numi1 = (i == 0) ? INT_MIN : nums1[i - 1],
                numi = (i == n) ? INT_MAX : nums1[i],
                numj1 = (j == 0) ? INT_MIN : nums2[j - 1],
                numj = (j == m ? INT_MAX : nums2[j]);
            if (numi1 <= numj) {
                mid1 = max(numi1, numj1);
                mid2 = min(numi, numj);
                l = i + 1;
            } else {
                r = i - 1;
            }
        }
        return ((n + m) % 2) ? mid1 : (mid1 + mid2) / 2.0;
    }
};
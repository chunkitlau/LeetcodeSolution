class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, inSet[256];
        for (int i = 0; i < 256; ++i) {
            inSet[i] = 0;
        }
        for (int i = 0, j = 0, n = s.size(); i < n; ++i) {
            while ((j < n) && (!inSet[s[j]])) {
                inSet[s[j++]] = 1;
            }
            ans = max(ans, j - i);
            inSet[s[i]] = 0;
        }
        return ans;
    }
};
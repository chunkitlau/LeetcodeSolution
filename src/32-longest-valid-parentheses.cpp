class Solution {
public:
    int longestValidParentheses(string s) {
        if (!s.size()) return 0;
        int n = s.size(), f[n], ans = 0;
        f[0] = 0;
        for (int i = 1; i < n; ++i) {
            if ((s[i] == ')') && (i - f[i - 1] - 1 >= 0) && (s[i - f[i - 1] - 1] == '(')) {
                f[i] = f[i - 1] + 2;
                if (i - f[i - 1] - 2 >= 0) f[i] += f[i - f[i - 1] - 2];
                ans = max(ans, f[i]);
            }
            else f[i] = 0;
        }
        return ans;
    }
};
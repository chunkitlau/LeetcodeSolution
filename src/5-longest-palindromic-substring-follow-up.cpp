class Solution {
public:
    string longestPalindrome(string s) {
        string s1(s.size() * 2 + 1, '#');
        for (int i = 0, n = s.size(); i < n; ++i) {
            s1[i * 2 + 1] = s[i];
        }
        s1[s.size() * 2] = '#';
        vector<int> f(s1.size());
        int p = 0, q = 0;
        for (int i = 0, m = s1.size(); i < m; ++i) {
            if (p + f[p] >= i) f[i] = min(f[p * 2 - i], p + f[p] - i);
            while ((i - f[i] - 1 >= 0) && (i + f[i] + 1 < m) && (s1[i - f[i] - 1] == s1[i + f[i] + 1])) ++f[i];
            if (i + f[i] > p + f[p]) p = i;
            if (f[i] > f[q]) q = i;
        }
        return s.substr((q - f[q]) / 2, f[q]);
    }
};
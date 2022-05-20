class Solution {
public:
    bool isMatch(string s, string p) {
        string start("$");
        s = start + s;
        p = start + p;
        int f[s.size() + 1][p.size() + 1], flag = 1;
        f[0][0] = 1;
        for (int j = 1, m = p.size(); j <= m; ++j) {
            f[0][j] = false;
            if (j % 2 == 0) {
                if (p[j] == '*') {
                    f[0][j] = flag;
                }
                else {
                    flag = 0;
                }
            }
        }
        for (int i = 1, n = s.size(), m = p.size(); i <= n; ++i) {
            f[i][0] = false;
            for (int j = 1; j <= m; ++j) {
                f[i][j] = (f[i - 1][j - 1] && ((s[i] == p[j]) || (p[j] == '.'))) ||
                    ((p[j] == '*') && (f[i][j - 2] || f[i][j - 1] || (f[i - 1][j] && ((s[i] == p[j - 1]) || (p[j - 1] == '.')))));
            }
        }
        return f[s.size() - 1][p.size() - 1];
    }
};
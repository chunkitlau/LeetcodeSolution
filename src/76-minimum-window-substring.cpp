class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size(), num_s[256], num_t[256];
        for (int k = 0; k < 256; ++k) {
            num_s[k] = num_t[k] = 0;
        }
        for (int k = 0; k < m; ++k) {
            ++num_t[t[k]];
        }
        int num_t_ch = 0;
        for (int k = 0; k < 256; ++k) {
            num_t_ch += num_t[k] > 0;
        }
        int num_s_ch = 0, l = 0, r = n + 1;
        for (int j = 0, k = 0; j < n; ++j) {
            while ((k < n) && (num_s_ch != num_t_ch)) {
                num_s_ch += num_s[s[k]] == num_t[s[k]] - 1;
                ++num_s[s[k]];
                ++k;
            }
            if ((num_s_ch == num_t_ch) && (k - j < r - l)) {
                l = j;
                r = k;
            }
            num_s_ch -= num_s[s[j]] == num_t[s[j]];
            --num_s[s[j]];
        }
        if (r > n) return "";
        else return s.substr(l, r - l);
    }
};
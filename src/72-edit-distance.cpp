class Solution {
public:
    int minDistance(string word1, string word2) {
        word1 = '#' + word1 + '%';
        word2 = '#' + word2 + '%';
        int n = word1.size(), m = word2.size(), f[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                f[i][j] = n + m;
            }
        }
        f[0][0] = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i && j && word1[i] == word2[j]) f[i][j] = min(f[i][j], f[i-1][j-1]);
                if (i && j) f[i][j] = min(f[i][j], f[i-1][j-1] + 1);
                if (i) f[i][j] = min(f[i][j], f[i-1][j] + 1);
                if (j) f[i][j] = min(f[i][j], f[i][j-1] + 1);
            }
        }
        return f[n-1][m-1];
    }
};
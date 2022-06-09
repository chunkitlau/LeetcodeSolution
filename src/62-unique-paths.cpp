class Solution {
public:
    int uniquePaths(int m, int n) {
        int c[m][n];
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < n; ++k) {
                c[j][k] = (!j) && (!k);
                if (j) c[j][k] += c[j-1][k];
                if (k) c[j][k] += c[j][k-1];
            }
        }
        return c[m-1][n-1];
    }
};
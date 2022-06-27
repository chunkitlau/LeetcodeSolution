class Solution {
public:
    int numTrees(int n) {
        int f[n+1];
        f[0] = f[1] = 1;
        for (int j = 2; j <= n; ++j) {
            f[j] = 0;
            for (int k = 0; k <= j - 1; ++k) {
                f[j] += f[k] * f[j - k - 1];
            }
        }
        return f[n];
    }
};
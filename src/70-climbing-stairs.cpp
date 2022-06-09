class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        else if (n == 2) return 2;
        int f[n];
        f[0] = 1;
        f[1] = 2;
        for (int k = 2; k < n; ++k) {
            f[k] = f[k-1] + f[k-2];
        }
        return f[n-1];
    }
};
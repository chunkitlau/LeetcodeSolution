class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), f[m][n];
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < n; ++k) {
                if ((j > 0) && ((k == 0) || ((k > 0) && (f[j-1][k] < f[j][k-1])))) {
                    f[j][k] = grid[j][k] + f[j-1][k];
                }
                else if (k > 0) f[j][k] = grid[j][k] + f[j][k-1];
                else f[j][k] = grid[j][k];
            }
        }
        return f[m-1][n-1];
    }
};
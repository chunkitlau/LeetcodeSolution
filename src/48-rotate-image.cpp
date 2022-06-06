class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int j = 0, n = matrix.size(); j < n; ++j) {
            for (int k = 0; k < j; ++k) {
                swap(matrix[j][k], matrix[k][j]);
            }
        }
        for (int j = 0, n = matrix.size(); j < n; ++j) {
            for (int k = 0; k < n / 2; ++k) {
                swap(matrix[j][k], matrix[j][n - k - 1]);
            }
        }
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> row0;
        row0.push_back(1);
        result.push_back(row0);
        for (int j = 1; j < numRows; ++j) {
            vector<int> row;
            row.push_back(1);
            for (int k = 1; k < j; ++k) {
                row.push_back(result[j-1][k-1] + result[j-1][k]);
            }
            row.push_back(1);
            result.push_back(row);
        }
        return result;
    }
};
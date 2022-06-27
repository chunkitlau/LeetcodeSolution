class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), ans = 0;
        vector<int> heights(m, 0);
        for (int j = n - 1; j >= 0; --j) {
            for (int k = 0; k < m; ++k) {
                if (matrix[j][k] == '1') {
                    ++heights[k];
                }
                else {
                    heights[k] = 0;
                }
            }
            ans = max(ans, largestRectangleArea(heights));
        }
        return ans;

    }
    int largestRectangleArea(vector<int>& heights) {
        stack<int> heights_stack;
        int ans = 0, n = heights.size();
        for (int k = 0; k < n; ++k) {
            int right = k - 1;
            while (!heights_stack.empty() && heights[k] < heights[heights_stack.top()]) {
                int top = heights_stack.top();
                heights_stack.pop();
                int last = -1;
                if (!heights_stack.empty()) 
                    last = heights_stack.top();
                ans = max(ans, heights[top] * (right - last));
            }
            heights_stack.push(k);
        }
        while (!heights_stack.empty()) {
            int top = heights_stack.top();
            heights_stack.pop();
            int last = -1;
            if (!heights_stack.empty()) 
                last = heights_stack.top();
            ans = max(ans, heights[top] * (n - 1 - last));
        }
        return ans;
    }
};
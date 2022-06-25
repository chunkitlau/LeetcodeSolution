class Solution {
public:
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
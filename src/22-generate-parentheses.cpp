class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string parenthes_string;
        dfs(n, n, parenthes_string, 0, result);
        return result;
    }
    void dfs(int n, int m, string parenthes_string,  int parenthes_in_stack, vector<string>& result) {
        if ((!n) && (!m)) {
            result.push_back(parenthes_string);
            return;
        }
        if (n) {
            dfs(n-1, m, parenthes_string+'(', parenthes_in_stack+1, result);
        }
        if (m && parenthes_in_stack) {
            dfs(n, m-1, parenthes_string+')', parenthes_in_stack-1, result);
        }
    }
};
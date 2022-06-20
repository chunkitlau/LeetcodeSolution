class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited;
        int n = board.size(), m = board[0].size(), l = word.size(); 
        for (int j = 0; j < n; ++j) {
            vector<bool> line;
            for (int k = 0; k < m; ++k) {
                line.push_back(0);
            }
            visited.push_back(line);
        }
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (board[j][k] == word[0]) {
                    if (dfs(board, j, k, word, 0, visited, n, m, l)) return true;
                }
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, int j, int k, string &word, int p, vector<vector<bool>> &visited, int n, int m, int l) {
        visited[j][k] = true;
        if (p + 1 == word.size()) return true;
        if (j && !visited[j-1][k] && board[j-1][k] == word[p+1] && dfs(board, j-1, k, word, p+1, visited, n, m, l)) return true;
        if (j+1<board.size() && !visited[j+1][k] && board[j+1][k] == word[p+1] && dfs(board, j+1, k, word, p+1, visited, n, m, l)) return true;
        if (k && !visited[j][k-1] && board[j][k-1] == word[p+1] && dfs(board, j, k-1, word, p+1, visited, n, m, l)) return true;
        if (k+1<board[0].size() && !visited[j][k+1] && board[j][k+1] == word[p+1] && dfs(board, j, k+1, word, p+1, visited, n, m, l)) return true;
        visited[j][k] = false;
        return false;
    }
};
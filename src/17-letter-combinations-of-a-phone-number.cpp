class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.size()) dfs(digits, 0, result);
        return result;
    }
    void dfs(string digits, int i, vector<string> &result) {
        if (i == digits.size()) {
            result.push_back(digits);
            return;
        }
        switch (digits[i]) {
        case '2':
            digits[i] = 'a';
            dfs(digits, i + 1, result);
            digits[i] = 'b';
            dfs(digits, i + 1, result);
            digits[i] = 'c';
            dfs(digits, i + 1, result);
            break;
        case '3':
            digits[i] = 'd';
            dfs(digits, i + 1, result);
            digits[i] = 'e';
            dfs(digits, i + 1, result);
            digits[i] = 'f';
            dfs(digits, i + 1, result);
            break;
        case '4':
            digits[i] = 'g';
            dfs(digits, i + 1, result);
            digits[i] = 'h';
            dfs(digits, i + 1, result);
            digits[i] = 'i';
            dfs(digits, i + 1, result);
            break;
        case '5':
            digits[i] = 'j';
            dfs(digits, i + 1, result);
            digits[i] = 'k';
            dfs(digits, i + 1, result);
            digits[i] = 'l';
            dfs(digits, i + 1, result);
            break;
        case '6':
            digits[i] = 'm';
            dfs(digits, i + 1, result);
            digits[i] = 'n';
            dfs(digits, i + 1, result);
            digits[i] = 'o';
            dfs(digits, i + 1, result);
            break;
        case '7':
            digits[i] = 'p';
            dfs(digits, i + 1, result);
            digits[i] = 'q';
            dfs(digits, i + 1, result);
            digits[i] = 'r';
            dfs(digits, i + 1, result);
            digits[i] = 's';
            dfs(digits, i + 1, result);
            break;
        case '8':
            digits[i] = 't';
            dfs(digits, i + 1, result);
            digits[i] = 'u';
            dfs(digits, i + 1, result);
            digits[i] = 'v';
            dfs(digits, i + 1, result);
            break;
        case '9':
            digits[i] = 'w';
            dfs(digits, i + 1, result);
            digits[i] = 'x';
            dfs(digits, i + 1, result);
            digits[i] = 'y';
            dfs(digits, i + 1, result);
            digits[i] = 'z';
            dfs(digits, i + 1, result);
            break;
        default:
            break;
        }
    }
};
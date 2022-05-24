class Solution {
public:
    bool isValid(string s) {
        stack<char> parenthes;
        for (int i = 0, n = s.size(); i < n; ++i) {
            switch (s[i]) {
            case '(':
            case '{':
            case '[':
                parenthes.push(s[i]);
                break;
            case ')':
                if ((!parenthes.empty()) && (parenthes.top() == '(')) parenthes.pop();
                else return false;
                break;
            case '}':
                if ((!parenthes.empty()) && (parenthes.top() == '{')) parenthes.pop();
                else return false;
                break;
            case ']':
                if ((!parenthes.empty()) && (parenthes.top() == '[')) parenthes.pop();
                else return false;
                break;
            default:
                break;
            }
        }
        return parenthes.empty();
    }
};
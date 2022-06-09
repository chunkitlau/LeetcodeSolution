class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> str2vec;
        for (int k = 0, n = strs.size(); k < n; ++k) {
            string str = strs[k];
            sort(str.begin(), str.end());
            str2vec[str].push_back(strs[k]);
        }
        vector<vector<string>> result;
        for (auto it = str2vec.begin(); it != str2vec.end(); ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};
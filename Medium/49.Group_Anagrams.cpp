class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        map<string, vector<string>> anagram_map;
        for (const string str: strs) {
            string sort_str = str;
            sort(sort_str.begin(), sort_str.end());
            anagram_map[sort_str].push_back(str);
        }
        for (const auto &[key, value]: anagram_map) {
            out.push_back(value);
        }
        return out;
    }
};
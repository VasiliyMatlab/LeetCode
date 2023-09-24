class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word)
            words.push_back(word);
        if (pattern.size() != words.size())
            return false;
        unordered_map<char, string> s_map;
        set<string> keys;
        for (int i = 0; i < pattern.size(); i++) {
            if (!s_map.contains(pattern[i])) {
                if (!keys.contains(words[i])) {
                    keys.insert(words[i]);
                    s_map[pattern[i]] = words[i];
                } else 
                    return false;
            }
            else {
                if (s_map[pattern[i]] != words[i])
                    return false;
            }
        }
        return true;
    }
};
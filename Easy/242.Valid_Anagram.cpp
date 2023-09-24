class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> s_map;
        for (const char c: s)
            s_map[c]++;
        for (const char c: t) {
            if (!s_map.contains(c))
                return false;
            else {
                s_map[c]--;
                if (s_map[c] < 1)
                    s_map.erase(c);
            }
        }
        return true;
    }
};
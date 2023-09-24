class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> s_map, t_map;
        for (int i = 0; i < s.size(); i++) {
            if (!s_map.contains(s[i]))
                s_map[s[i]] = t[i];
            else {
                if (s_map[s[i]] != t[i])
                    return false;
            }
            if (!t_map.contains(t[i]))
                t_map[t[i]] = s[i];
            else {
                if (t_map[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};
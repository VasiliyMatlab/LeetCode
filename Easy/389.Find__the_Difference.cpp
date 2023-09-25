class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> t_map;
        for (const auto c: t)
            t_map[c]++;
        for (const auto c: s) {
            if (!t_map.contains(c))
                return c;
            t_map[c]--;
            if (t_map[c] == 0)
                t_map.erase(c);
        }
        for (const auto &[key, value]: t_map)
            return key;
        return 'c';
    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> magazine_map;
        for (const char c: magazine)
            magazine_map[c]++;
        for (const char c: ransomNote) {
            if (!magazine_map.contains(c))
                return false;
            magazine_map[c]--;
            if (magazine_map[c] < 1)
                magazine_map.erase(c);
        }
        return true;
    }
};
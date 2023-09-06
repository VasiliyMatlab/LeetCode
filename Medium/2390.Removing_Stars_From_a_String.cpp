class Solution {
public:
    string removeStars(string s) {
        string out;
        for (auto c: s) {
            if (c == '*') {
                out.pop_back();
            } else {
                out.push_back(c);
            }
        }
        return out;
    }
};
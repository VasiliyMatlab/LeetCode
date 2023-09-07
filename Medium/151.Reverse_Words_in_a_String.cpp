class Solution {
public:
    string reverseWords(string s) {
        string res;
        string proc;
        bool was_first_word = false;
        for (auto c: s) {
            if (c == ' ' && !was_first_word)
                continue;
            if (c != ' ') {
                proc += c;
                was_first_word = true;
                continue;
            }
            if ((c == ' ') && (proc.back() != ' ')) {
                proc += ' ';
                continue;
            }
        }
        while (proc.back() == ' ')
            proc.pop_back();
        vector<string> out = splitString(proc);
        while (!out.empty()) {
            res += out.back() + " ";
            out.pop_back();
        }
        res.pop_back();
        return res;
    }
private:
    vector<string> splitString(string s) {
        vector<string> vec = {""};
        size_t i = 0;
        for (char c: s) {
            if (c == ' ') {
                i++;
                vec.push_back("");
                continue;
            }
            vec[i] += c;
        }
        return vec;
    }
};
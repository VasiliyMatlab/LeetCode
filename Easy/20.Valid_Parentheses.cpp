class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for (const char c: s) {
            if (open.contains(c))
                mystack.push(c);
            else {
                if (mystack.empty() || (close.at(c) != mystack.top()))
                    return false;
                else
                    mystack.pop();
            }
        }
        return mystack.empty();
    }

private:
    const unordered_set<char> open = {'(', '[', '{'};
    const unordered_map<char, char> close  = {{')', '('}, {']', '['}, {'}', '{'}};
};
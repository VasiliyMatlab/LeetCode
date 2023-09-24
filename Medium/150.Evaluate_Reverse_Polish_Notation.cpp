class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> storage;
        for (const string str: tokens) {
            if (ops.contains(str)) {
                int op2 = storage.top(); storage.pop();
                int op1 = storage.top(); storage.pop();
                if (str == "+")
                    storage.push(op1 + op2);
                else if (str == "-")
                    storage.push(op1 - op2);
                else if (str == "*")
                    storage.push(op1 * op2);
                else
                    storage.push(op1 / op2);
            } else {
                storage.push(stoi(str));
            }
        }
        return storage.top();
    }

private:
    const set<string> ops = {"+", "-", "*", "/"};
};
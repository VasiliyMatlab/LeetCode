class Solution {
public:
    string decodeString(string s) {
        vector<char> mystack;
        string out;
        for (char c: s) {
            if (c != ']')
                mystack.push_back(c);
            else {
                // Извлекаем символ
                string target;
                char poped_char;
                while ((poped_char = mystack.back()) != '[') {
                    mystack.pop_back();
                    target.insert(0, 1, poped_char);
                }
                mystack.pop_back();
                // Узнаем число раз для его повторения
                int num = 0, decade = 0;
                while (!mystack.empty() && isdigit(poped_char = mystack.back())) {
                    mystack.pop_back();
                    num += (poped_char - '0') * pow(10, decade++);
                }
                // Повторяем строку нужное число раз
                for (int i = 0; i < num; i++) {
                    for (char a: target)
                        mystack.push_back(a);
                }
            }
        }
        while (!mystack.empty()) {
            out.insert(0, 1, mystack.back());
            mystack.pop_back();
        }
        return out;
    }
};
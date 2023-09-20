class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> mystack;
        vector<int> out(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++) {
            if (mystack.empty()) {
                mystack.push(i);
                continue;
            }
            while (!mystack.empty() && (temperatures[i] > temperatures[mystack.top()])) {
                out[mystack.top()] = i - mystack.top();
                mystack.pop();
            }
            mystack.push(i);
        }
        while (!mystack.empty()) {
            out[mystack.top()] = 0;
            mystack.pop();
        }
        return out;
    }
};
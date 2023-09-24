class MinStack {
public:
    MinStack() {
        mystack = {};
        min_val = {};
    }
    
    void push(int val) {
        if (mystack.empty())
            min_val.push_back(val);
        else
            min_val.push_back(min(min_val.back(), val));
        mystack.push_back(val);
    }
    
    void pop() {
        mystack.pop_back();
        min_val.pop_back();
    }
    
    int top() {
        return mystack.back();
    }
    
    int getMin() {
        return min_val.back();
    }

private:
    vector<int> mystack;
    vector<int> min_val;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
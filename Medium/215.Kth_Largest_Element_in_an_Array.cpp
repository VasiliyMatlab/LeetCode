class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> myqueue;
        for (auto n: nums)
            myqueue.push(n);
        k--;
        while (k--)
            myqueue.pop();
        return myqueue.top();
    }
};
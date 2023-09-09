class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3)
            return false;
        int first = INT_MAX, second = INT_MAX;
        for (auto k: nums) {
            if (k <= first)
                first = k;
            else if (k <= second)
                second = k;
            else
                return true;
        }
        return false;
    }
};
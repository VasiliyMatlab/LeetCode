class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (auto k: nums)
            x ^= k;
        return x;
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sm = 0;
        for (size_t i = 0; i < k; i++)
            sm += nums[i];
        double res = sm;
        for (size_t i = k; i < nums.size(); i++) {
            sm += (nums[i] - nums[i-k]);
            res = max(res, sm);
        }
        return (res / k);
    }
};
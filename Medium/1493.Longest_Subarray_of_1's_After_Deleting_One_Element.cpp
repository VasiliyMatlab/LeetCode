class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeros = 0, maxlen = 0, startidx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zeros++;
            while (zeros > 1) {
                if (nums[startidx] == 0)
                    zeros--;
                startidx++;
            }
            maxlen = max(maxlen, i - startidx);
        }
        return maxlen;
    }
};
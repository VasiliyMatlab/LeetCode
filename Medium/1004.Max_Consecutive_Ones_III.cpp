class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0, maxlen = 0, startidx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zeros++;
            while (zeros > k) {
                if (nums[startidx] == 0)
                    zeros--;
                startidx++;
            }
            maxlen = max(maxlen, i - startidx + 1);
        }
        return maxlen;
    }
};
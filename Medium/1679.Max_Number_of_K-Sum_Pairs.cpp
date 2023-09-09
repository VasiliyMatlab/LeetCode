class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1, cnt = 0;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum == k) {
                l++;
                r--;
                cnt++;
            } else if (sum < k) {
                l++;
            } else {
                r--;
            }
        }
        return cnt;
    }
};
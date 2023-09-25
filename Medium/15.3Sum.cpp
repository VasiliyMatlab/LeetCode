class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (nums.size() - 2); i++) {
            int target = -nums[i];
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    out.push_back({nums[i], nums[l], nums[r]});
                    int temp_l = l, temp_r = r;
                    while ((l < r) && (nums[temp_l] == nums[l]))
                        l++;
                    while ((l < r) && (nums[temp_r] == nums[r]))
                        r--;
                } else if (sum < target) {
                    l++;
                } else {
                    r--;
                }
            }
            while (((i + 1) < (nums.size() - 2)) && (nums[i] == nums[i+1]))
                i++;
        }
        return out;
    }
};
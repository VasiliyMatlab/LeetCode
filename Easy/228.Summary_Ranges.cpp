class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        vector<string> out;
        int l = 0;
        for (int r = 1; r < nums.size(); r++) {
            if (((long long) nums[r] - (long long) nums[r-1]) != 1) {
                if (l != (r - 1))
                    out.push_back(to_string(nums[l]) + "->" + to_string(nums[r-1]));
                else
                    out.push_back(to_string(nums[l]));
                l = r;
            }
        }
        if (l != (nums.size() - 1))
            out.push_back(to_string(nums[l]) + "->" + to_string(nums.back()));
        else
            out.push_back(to_string(nums[l]));
        return out;
    }
};
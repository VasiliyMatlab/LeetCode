class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> dict;
        vector<vector<int>> res = {{}, {}};

        for (size_t i = 0; i < nums2.size(); i++) {
            if (!dict.count(nums2[i]))
                dict.insert(nums2[i]);
        }
        for (size_t i = 0; i < nums1.size(); i++) {
            if (!dict.count(nums1[i]))
                if (find(res[0].begin(), res[0].end(), nums1[i]) == res[0].end())
                    res[0].push_back(nums1[i]);
        }

        dict.clear();
        for (size_t i = 0; i < nums1.size(); i++) {
            if (!dict.count(nums1[i]))
                dict.insert(nums1[i]);
        }
        for (size_t i = 0; i < nums2.size(); i++) {
            if (!dict.count(nums2[i]))
                if (find(res[1].begin(), res[1].end(), nums2[i]) == res[1].end())
                    res[1].push_back(nums2[i]);
        }

        return res;
    }
};
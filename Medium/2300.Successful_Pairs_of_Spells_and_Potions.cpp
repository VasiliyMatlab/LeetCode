class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs;
        sort(potions.begin(), potions.end());
        for (int k: spells) {
            long long target = ceil((double) success / (double) k);
            int count = 0;
            int l = 0, r = potions.size() - 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (potions[mid] >= target) {
                    count = potions.size() - mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            pairs.push_back(count);
        }
        return pairs;
    }
};
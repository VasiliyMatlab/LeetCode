class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int prev = 0;
        for (size_t i = 0; i < gain.size(); i++) {
            int curr = gain[i] + prev;
            prev = curr;
            highest = max(curr, highest);
        }
        return highest;
    }
};
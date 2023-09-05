class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto max = *max_element(begin(candies), end(candies));
        vector<bool> out;
        for (size_t i = 0; i < candies.size(); i++)
            out.push_back(((candies[i] + extraCandies) >= max) ? true : false);
        return out;
    }
};
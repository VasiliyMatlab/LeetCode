class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        for (int i = citations.size() - 1, j = 1; i >= 0; i--, j++) {
            if (citations[i] < j)
                return (j - 1);
        }
        return citations.size();
    }
};
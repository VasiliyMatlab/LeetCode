class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.size() == 0)
            return {newInterval};
        for (int i = 0; i < intervals.size(); i++) {
            if (intervals[i][0] > newInterval[0]) {
                intervals.insert(intervals.begin(), newInterval);
                return merge(intervals);
            } else if (intervals[i][1] >= newInterval[0]) {
                intervals.insert(intervals.begin() + i + 1, newInterval);
                return merge(intervals);
            }
        }
        intervals.push_back(newInterval);
        return intervals;
    }

private:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> out;
        int l = intervals[0][0], r = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= r) {
                if (intervals[i][1] > r)
                    r = intervals[i][1];
            }
            else {
                out.push_back({l, r});
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        out.push_back({l, r});
        return out;
    }
};
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int arrows = 1, curr_arrow = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            if (curr_arrow < points[i][0]) {
                arrows++;
                curr_arrow = points[i][1];
            }
        }
        return arrows;
    }

private:
    static bool cmp(const vector<int> &a, const vector<int> &b) {
        return a[1] < b[1];
    }
};
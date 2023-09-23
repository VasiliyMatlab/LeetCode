class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int idx = 0, i = 0, j = 0;
        int left = 0, right = n - 1;
        int top = 0, bottom = m - 1;
        vector<int> out;
        while (out.size() < (m * n)) {
            // up board
            while (j <= right)
                out.push_back(matrix[i][j++]);
            j--;
            i++;
            if (out.size() == (m * n))
                break;
            // right board
            while (i <= bottom)
                out.push_back(matrix[i++][j]);
            i--;
            j--;
            if (out.size() == (m * n))
                break;
            // down board
            while (j >= left)
                out.push_back(matrix[i][j--]);
            j++;
            i--;
            if (out.size() == (m * n))
                break;
            // left board
            while (i > top)
                out.push_back(matrix[i--][j]);
            i++;
            j++;
            left++;
            right--;
            top++;
            bottom--;
        }
        return out;
    }
};
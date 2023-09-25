class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return search(matrix, target, 0, matrix[0].size() - 1);
    }

private:
    bool search(vector<vector<int>> &matrix, int target, int i, int j) {
        if ((i >= matrix.size()) || (j < 0))
            return false;
        if (matrix[i][j] == target)
            return true;
        if (matrix[i][j] > target)
            return search(matrix, target, i, j-1);
        return search(matrix, target, i+1, j);
    }
};
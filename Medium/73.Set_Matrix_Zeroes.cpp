class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        set<int> zero_rows, zero_cols;
        // search all zero rows and cols
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    // push to zero rows
                    if (!zero_rows.contains(i))
                        zero_rows.insert(i);
                    // push to zero cols
                    if (!zero_cols.contains(j))
                        zero_cols.insert(j);
                }
            }
        }
        // rows to zero
        for (const int k: zero_rows) {
            for (int j = 0; j < n; j++)
                matrix[k][j] = 0;
        }
        // cols to zero
        for (const int k: zero_cols) {
            for (int i = 0; i < m; i++)
                matrix[i][k] = 0;
        }
    }
};
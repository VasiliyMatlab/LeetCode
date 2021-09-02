int rows;
int cols;
int **mas;

int area(int r, int c, int **log) {
    if ((r < 0) || (c < 0) || (r >= rows) || (c >= cols) || (mas[r][c] == 0) || (log[r][c]))
        return 0;
    log[r][c] = 1;
    return (1 + area(r-1, c, log) + area(r+1, c, log) + area(r, c-1, log) + area(r, c+1, log));
}

int maxAreaOfIsland(int **grid, int gridSize, int *gridColSize) {
    rows = gridSize;
    cols = *gridColSize;
    mas = grid;
    int **log = (int **) malloc(rows*sizeof(int *));
    for (int i = 0; i < rows; i++) {
        log[i] = (int *) malloc(cols*sizeof(int));
        for (int j = 0; j < cols; j++)
            log[i][j] = 0;
    }
    int ans;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int m = area(i, j, log);
            ans = (ans > m) ? ans : m;
        }
    }
    return ans;
}
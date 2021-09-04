#include <stddef.h>
#include <stdlib.h>

int **findFarmland(int **land, int landSize, int *landColSize, int *returnSize, int **returnColumnSizes) {
    int m = landSize;
    int n = landColSize[0];
    int **seen = (int **) malloc(m*sizeof(int *));
    for (int i = 0; i < m; i++) {
        seen[i] = (int *) malloc(n*sizeof(int));
        for (int j = 0; j < n; j++)
            seen[i][j] = 0;
    }
    *returnSize = 0;
    *returnColumnSizes = NULL;
    int **out = NULL;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Пропускаем, если уже видели или это не поле
            if (seen[i][j] || !land[i][j])
                continue;
            // Если видим впервые
            *returnSize += 1;
            *returnColumnSizes = (int *) realloc(*returnColumnSizes, (*returnSize)*sizeof(int));
            (*returnColumnSizes)[(*returnSize)-1] = 4;
            out = (int **) realloc(out, (*returnSize)*sizeof(int *)) ;
            out[(*returnSize)-1] = (int *) malloc(4*sizeof(int));
            // Записываем левый верхний угол
            out[(*returnSize)-1][0] = i;
            out[(*returnSize)-1][1] = j;
            // Ищем правый нижний угол
            int k = j + 1;
            for (; k < n; k++)
                if (!land[i][k])
                    break;
            k--;
            int z = i + 1;
            for (; z < m; z++)
                if (!land[z][k])
                    break;
            z--;
            // Записываем правый нижний угол
            out[(*returnSize)-1][2] = z;
            out[(*returnSize)-1][3] = k;
            // Помечаем все поле, как уже увиденное
            for (z = i; z <= out[(*returnSize)-1][2]; z++) {
                for (k = j; k <= out[(*returnSize)-1][3]; k++)
                    seen[z][k] = 1;
            }
        }
    }
    return out;
}

int main() {
    int **land = (int **) malloc(3*sizeof(int *));
    for (int i = 0; i < 3; i++) {
        land[i] = (int *) malloc(3*sizeof(int));
    }
    land[0][0] = 1;
    land[0][1] = 0;
    land[0][2] = 0;
    land[1][0] = 0;
    land[1][1] = 1;
    land[1][2] = 1;
    land[2][0] = 0;
    land[2][1] = 1;
    land[2][2] = 1;
    int m = 3;
    int n[3] = {3, 3, 3};

    /*int **land = (int **) malloc(2*sizeof(int *));
    for (int i = 0; i < 2; i++) {
        land[i] = (int *) malloc(2*sizeof(int));
    }
    land[0][0] = 1;
    land[0][1] = 1;
    land[1][0] = 1;
    land[1][1] = 1;
    int m = 2;
    int n[2] = {3, 3};*/

    /*int **land = (int **) malloc(1*sizeof(int *));
    for (int i = 0; i < 1; i++) {
        land[i] = (int *) malloc(1*sizeof(int));
    }
    land[0][0] = 0;
    int m = 1;
    int n[1] = {1};*/

    int mr;
    int *mc;
    int **out = findFarmland(land, m, n, &mr, &mc);
    return 0;
}
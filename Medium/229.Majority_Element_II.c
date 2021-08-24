#include <stddef.h>

int* majorityElement(int *nums, int numsSize, int *returnSize){
    int *Num = (int*) malloc(sizeof(int));
    int *cnt = (int*) malloc(sizeof(int));
    Num[0] = nums[0];
    cnt[0] = 1;
    int size = 1;
    for (int i = 1; i < numsSize; i++) {
        int flag = 0;
        for (int j = 0; j < size; j++) {
            if (nums[i] == Num[j]) {
                flag = 1;
                cnt[j] += 1;
                continue;
            }
        }
        if (!flag) {
            size += 1;
            Num = (int*) realloc(Num, size*sizeof(int));
            cnt = (int*) realloc(cnt, size*sizeof(int));
            Num[size-1] = nums[i];
            cnt[size-1] = 1;
        }
    }
    int treshold = numsSize / 3;
    int *out = NULL;
    *returnSize = 0;
    for (int i = 0; i < size; i++) {
        if (cnt[i] > treshold) {
            (*returnSize)++;
            out = (int*) realloc(out, (*returnSize)*sizeof(int));
            out[*returnSize-1] = Num[i];
        }
    }
    free(Num);
    free(cnt);
    return out;
}
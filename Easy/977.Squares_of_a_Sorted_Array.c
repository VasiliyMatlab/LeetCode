int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *ptr = (int *) malloc(numsSize*sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        nums[i] *= nums[i];
        ptr[i] = nums[i];
    }
    int flag = 1;
    int border = numsSize;
    while (flag) {
        flag = 0;
        for (int i = 0; i < border-1; i++) {
            if (ptr[i] > ptr[i+1]) {
                int tmp = ptr[i+1];
                ptr[i+1] = ptr[i];
                ptr[i] = tmp;
                flag = 1;
            }
        }
        border--;
    }
    return ptr;
}
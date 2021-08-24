int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize; 
    int *M = (int*) malloc(numsSize*sizeof(int));
    M[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        M[i] = M[i-1] + nums[i];
    }
    return M;
}
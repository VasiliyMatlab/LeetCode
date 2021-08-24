int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *p = malloc(2*sizeof(int));
    for (int i = 0; i < numsSize; i++){
        for (int j = 0; j < numsSize; j++){
            if (nums[i] + nums[j] == target){
                p[0] = i;
                p[1] = j;
                *returnSize = 2;
                break;
            }
        }
    }
    return p;
}
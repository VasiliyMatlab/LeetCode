int missingNumber(int* nums, int numsSize){
    int C[10000] = {0}, i;
    for (i = 0; i < numsSize; i++)
        C[nums[i]]++;
    for (i = 0; i <= numsSize; i++){
        if (C[i] == 0){
            break;
        }
    }
    return i;
}
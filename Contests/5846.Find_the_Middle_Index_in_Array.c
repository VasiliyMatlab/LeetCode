int findMiddleIndex(int *nums, int numsSize) {
    if (numsSize == 1)
        return 0;
    for (int i = 0; i < numsSize; i++) {
        int sum_left = 0;
        int sum_right = 0;
        if (i == 0) {
            for (int j = 1; j < numsSize; j++)
                sum_right += nums[j];
        }
        else if (i == numsSize -1) {
            for (int j = i-1; j >= 0; j--)
                sum_left += nums[j];
        }
        else {
            for (int j = 0; j < i; j++)
                sum_left += nums[j];
            for (int j = i+1; j < numsSize; j++)
                sum_right += nums[j];
        }
        if (sum_left == sum_right)
            return i;
    }
    return -1;
}
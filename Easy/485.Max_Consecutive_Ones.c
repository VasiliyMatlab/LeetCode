int findMaxConsecutiveOnes(int *nums, int numsSize) {
    int max = 0;
    int cnt = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i])
            cnt++;
        else {
            max = (max < cnt) ? cnt : max;
            cnt = 0;
        }
    }
    if (cnt)
        max = (max < cnt) ? cnt : max;
    return max;
}
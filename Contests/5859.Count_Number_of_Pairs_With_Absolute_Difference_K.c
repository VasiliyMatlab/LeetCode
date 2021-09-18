int countKDifference(int *nums, int numsSize, int k) {
    int count = 0;
    for (int i = 0; i < numsSize-1; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if ((int) fabs((double) (nums[i]-nums[j])) == k)
                count++;
        }
    }
    return count;
}
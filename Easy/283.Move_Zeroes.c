void moveZeroes(int* nums, int numsSize){
    int flag = 1;
    while (flag) {
        flag = 0;
        for (int i = 0; i < numsSize-1; i++) {
            if (nums[i] == 0) {
                nums[i] = nums[i+1];
                nums[i+1] = 0;
                flag = 1;
            }
        }
        numsSize--;
    }
}
int maxSubArray(int* nums, int numsSize){
    if(numsSize == 1) return nums[0];
    int Maxptr = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i-1] > 0)
            nums[i] += nums[i-1];
        if(nums[i] > nums[Maxptr])
            Maxptr = i;
    }
    return nums[Maxptr];
}
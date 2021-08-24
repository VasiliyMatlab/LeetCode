int removeElement(int* nums, int numsSize, int val){
    if (numsSize == 0)
        return numsSize;
    char i = 0;
    while (i < numsSize){
        if (nums[i] == val){
            for (char j = i; j < numsSize-1; j++)
                nums[j] = nums[j+1];
            numsSize--;
        }
        else
            i++;
    }
    return numsSize;
}
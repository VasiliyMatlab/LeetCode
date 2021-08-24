void rotate(int* nums, int numsSize, int k){
    int *ptr = (int *) malloc(numsSize*sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        int index = (i + k) % numsSize;
        ptr[index] = nums[i];
    }
    for (int i = 0; i < numsSize; i++)
        nums[i] = ptr[i];
}
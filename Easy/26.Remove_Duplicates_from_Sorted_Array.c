int removeDuplicates(int* nums, int numsSize){
    int len = numsSize;
    if (len != 0){
        int i = 0;
        while (i != len - 1){
            if (nums[i] == nums[i+1]){
                for (int j = i+1; j < len-1; j++){
                    nums[j] = nums[j+1];
                }
                len--;
            }
            else
                i++;
        }
    }
    return len;
}
#include <stdbool.h>

int compare(const void * x1, const void * x2)   
{
  return ( *(int*)x1 - *(int*)x2 );              
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize-1; i++) {
        if (nums[i] == nums[i+1])
            return true;
    }
    return false;
}
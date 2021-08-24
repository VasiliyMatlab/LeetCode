#include <stdbool.h>

bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    if (!k)
        return false;
    for (int i = 0; i < numsSize; i++) {
        int upper = (k+i+1>numsSize) ? numsSize : k+i+1;
        for (int j = i+1; j < upper; j++) {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}
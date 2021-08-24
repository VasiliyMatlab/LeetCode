typedef struct {
    int size;
    int *numbers;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray *ptr = (NumArray *) malloc(sizeof(NumArray));
    ptr->size = numsSize;
    ptr->numbers = nums;
    return ptr;
}

int numArraySumRange(NumArray* obj, int left, int right) {
    int sum = 0;
    for (int i = left; i <= right; i++)
        sum += obj->numbers[i];
    return sum;
}

void numArrayFree(NumArray* obj) {
    obj->size = 0;
    free(obj->numbers);
    free(obj);
}
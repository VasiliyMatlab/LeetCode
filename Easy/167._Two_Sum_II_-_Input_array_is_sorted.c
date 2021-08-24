int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int *M = (int*) malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numbersSize; i++) {
        for (int j = i+1; j < numbersSize; j++) {
            if ((numbers[i] + numbers[j]) == target) {
                M[0] = i+1;
                M[1] = j+1;
                break;
            }
        }
    }
    return M;
}
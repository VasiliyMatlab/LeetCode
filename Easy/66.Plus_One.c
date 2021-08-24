int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    int *output = malloc(*returnSize*sizeof(int));
    for (int i = 0; i < *returnSize; i++){
        if (i == *returnSize-1)
            output[i] = digits[i]+1;
        else
            output[i] = digits[i];
    }
    for (int i = *returnSize-1; i > 0; i--){
        if (output[i] == 10){
            output[i] = 0;
            output[i-1] += 1;
        }
    }
    if (output[0] == 10){
        output[0] = 0;
        *returnSize += 1;
        int *out2 = malloc(*returnSize*sizeof(int));
        out2[0] = 1;
        for (int i = 1; i < *returnSize; i++){
            out2[i] = output[i-1];
        }
        return out2;
    }
    return output;
}
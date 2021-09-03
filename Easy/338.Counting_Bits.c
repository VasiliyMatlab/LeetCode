unsigned countOnes(int n) {
    unsigned count = 0;
    while (n) {
        n &= n - 1;
        count++;
    }
    return count;
}

int *countBits(int n, int *returnSize) {
    *returnSize = ++n;
    int *mas = (int *) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        mas[i] = countOnes(i);
    }
    return mas;
}
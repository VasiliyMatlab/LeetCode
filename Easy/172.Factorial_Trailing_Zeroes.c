int trailingZeroes(int n){
    if(!n)
        return 0;
    int k = n / 5;
    int sum = k;
    while (k >= 5) {
        k /= 5;
        sum += k;
    }
    return sum;
}
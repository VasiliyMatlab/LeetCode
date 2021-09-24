int tribonacci(int n){
    if (!n)
        return 0;
    if ((n == 1) || (n == 2))
        return 1;
    int cur;
    int prev = 1, prev2 = 1, prev3 = 0;
    for (int i = 3; i <= n; i++) {
        cur = prev + prev2 + prev3;
        prev3 = prev2;
        prev2 = prev;
        prev = cur;
    }
    return cur;
}
int fib(int n){
    if (!n)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    int prev1 = 1;
    int prev2 = 0;
    for (int i = 2; i < n; i++) {
        int tmp = prev1;
        prev1 += prev2;
        prev2 = tmp;
    }
    return prev1+prev2;
}
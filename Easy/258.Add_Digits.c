int addDigits(int num){
    while (num / 10) {
        int M[20] = {0};
        int i = 0;
        while (num) {
            M[i] = num % 10;
            num /= 10;
            i++;
        }
        i--;
        num = 0;
        for (i; i >= 0; i--)
            num += M[i];
    }
    return num;
}
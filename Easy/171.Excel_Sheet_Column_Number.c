int ipow(int k, int n) {
    if (!n)
        return 1;
    if (n == 1)
        return k;
    int j = k;
    for (int i = 1; i < n; i++) {
        j *= k;
    }
    return j;
}

int titleToNumber(char *columnTitle){
    int i = 0;
    while (columnTitle[i])
        i++;
    int len = i;
    long int out = 0;
    for (i = 0; i < len; i++) {
        out += (columnTitle[len-1-i]-0x40)*ipow(26, i);
    }
    return out;
}
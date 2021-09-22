int maxPower(char *s) {
    if (strlen(s) == 1)
        return 1;
    int max = 1;
    int cnt = 1;
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == s[i-1])
            cnt++;
        else {
            max = (max < cnt) ? cnt : max;
            cnt = 1;
        }
    }
    if (cnt != 1)
        max = (max < cnt) ? cnt : max;
    return max;
}
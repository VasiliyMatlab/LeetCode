char findTheDifference(char *s, char *t) {
    int s_count = 0, t_count = 0;
    for (int i = 0; i < strlen(s); i++)
        s_count += s[i];
    for (int i = 0; i < strlen(t); i++)
        t_count += t[i];
    return t_count - s_count;
}
int lengthOfLastWord(char * s){
    int S = 0;
    char flag = 0;
    for (int i = strlen(s)-1; i >= 0; i--){
        if ((s[i] >= 65) && (s[i] <= 122))
            flag = 1;
        if (flag == 0)
            continue;
        if (s[i] != ' ')
            S++;
        else
            break;
    }
    return S;
}
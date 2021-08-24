char *convertToTitle(int columnNumber){
    int *M = (int*) malloc(sizeof(int));
    int i = 0;
    while (columnNumber) {
        i++;
        M = (int*) realloc(M, i*sizeof(int));
        M[i-1] = (columnNumber-1) % 26 + 'A';
        columnNumber = (columnNumber-1) / 26;
    }
    int len = i;
    int j = 0;
    char *out = (char*) malloc((len+1)*sizeof(char));
    for (i = len-1; i >= 0; i--) {
        out[j] = M[i];
        j++;
    }
    out[j] = '\0';
    free(M);
    return out;
}
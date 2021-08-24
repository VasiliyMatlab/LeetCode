int romanToInt(char * s){
    int number = 0;
    int *A = malloc(strlen(s)*sizeof(int));
    for (int i = 0; i < strlen(s); i++){
        switch (s[i]){
            case 'I':
                A[i] = 1;
                break;
            case 'V':
                A[i] = 5;
                break;
            case 'X':
                A[i] = 10;
                break;
            case 'L':
                A[i] = 50;
                break;
            case 'C':
                A[i] = 100;
                break;
            case 'D':
                A[i] = 500;
                break;
            case 'M':
                A[i] = 1000;
        }
    }
    for (int i = 0; i < strlen(s); i++){
        if ((i < strlen(s)-1) && (A[i] < A[i+1]))
            number -= A[i];
        else
            number += A[i];
    }
    free(A);
    return number;
}
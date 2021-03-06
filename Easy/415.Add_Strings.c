#include <stddef.h>

char * addStrings(char * num1, char * num2){
    int i, j;
    int sum=0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int nmax = len1 > len2 ? len1 : len2; 
    int st_count = nmax + 1;
    char *st = (char*)malloc((nmax + 2) * sizeof(char));
    st[st_count--] = NULL;
    
    while(len1 > 0 || len2 > 0){
        if(len1 > 0)
            sum = sum + (num1[--len1] - '0');
        if(len2 > 0)
            sum = sum + (num2[--len2] - '0');
        st[st_count--] = (sum % 10) + '0';
        if(sum >= 10) sum /= 10;
        else sum = 0;
    }
    if(sum > 0) st[st_count--] = sum + '0';
    if(st_count == 0)
        for(i=0; i < nmax + 1; i++)
            st[i] = st[i + 1];
    return st;
}
int strStr(char * haystack, char * needle){
    if (strlen(needle) == 0)
        return 0;
    if (strlen(haystack) < strlen(needle))
        return -1;
    int i = 0, rc, j = 0;
    while (i < strlen(haystack)){
        if (haystack[i] == needle[j]){
            rc = i;
            j++;
            if (j == strlen(needle)){
                rc -= strlen(needle)-1;
                break;
            }
        }
        else{
            i -= j;
            j = 0;
            rc = -1;
        }
        i++;
    }
    if (i == strlen(haystack))
        return -1;
    return rc;
}
#include <stdbool.h>

bool isPalindrome(char * s){
    int len = strlen(s);
    for (int i = 0, j = len-1; j > i; ) {
        while (!isalnum(s[i]) && i < len) {
            i++;
        }
        while (!isalnum(s[j]) && j > 0) {
            j--;
        }
        if (i == len && j == 0)
            return 1;
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (char) tolower(s[i]);
        if (s[j] >= 'A' && s[j] <= 'Z')
            s[j] = (char) tolower(s[j]);
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
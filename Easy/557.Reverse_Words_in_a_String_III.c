#include <string.h>

void reverse (char *s, int start, int end){
    while (start < end){
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
}

char *reverseWords(char *s) {
    int i = 0;
    int a = 0;
    for (; s[i]; i++) {
        if (s[i] == ' '){
            reverse(s, a, i - 1);
            a = i + 1;
        }
    }
    reverse (s, a, i - 1);
    return s;
}
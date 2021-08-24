#include <stdbool.h>

bool isIsomorphic(char * s, char * t){
    char *dict1 = (char*) malloc(sizeof(char));
    char *dict2 = (char*) malloc(sizeof(char));
    int size = 1;
    dict1[0] = s[0];
    dict2[0] = t[0];
    int i = 1;
    while (s[i]) {
        char flag = 0;
        for (int j = 0; j < size; j++) {
            if (s[i] == dict1[j]) {
                if (dict2[j] != t[i])
                    return false;
                flag = 1;   
            }
        }
        if (!flag) {
            size++;
            dict1 = (char*) realloc(dict1, size*sizeof(char));
            dict2 = (char*) realloc(dict2, size*sizeof(char));
            dict1[size-1] = s[i];
            dict2[size-1] = t[i];
        }
        i++;
    }
    free(dict1);
    free(dict2);
    
    char *dict3 = (char*) malloc(sizeof(char));
    char *dict4 = (char*) malloc(sizeof(char));
    size = 1;
    dict3[0] = t[0];
    dict4[0] = s[0];
    i = 1;
    while (t[i]) {
        char flag = 0;
        for (int j = 0; j < size; j++) {
            if (t[i] == dict3[j]) {
                if (dict4[j] != s[i])
                    return false;
                flag = 1;   
            }
        }
        if (!flag) {
            size++;
            dict3 = (char*) realloc(dict3, size*sizeof(char));
            dict4 = (char*) realloc(dict4, size*sizeof(char));
            dict3[size-1] = t[i];
            dict4[size-1] = s[i];
        }
        i++;
    }
    free(dict3);
    free(dict4);
    return true;
}
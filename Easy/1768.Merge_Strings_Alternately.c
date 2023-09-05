#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    const size_t word1_len = strlen(word1);
    const size_t word2_len = strlen(word2);
    char *result = (char *) malloc((word1_len + word2_len + 1) * sizeof(char));
    size_t i = 0, j = 0, k = 0;
    while ((i < word1_len) || (j < word2_len)) {
        if (i < word1_len)
            result[k++] = word1[i++];
        if (j < word2_len)
            result[k++] = word2[j++];
    }
    result[k] = '\0';
    return result;
    return result;
}
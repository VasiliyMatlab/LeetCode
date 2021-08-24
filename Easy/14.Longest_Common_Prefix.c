#include <stddef.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char *pre = NULL;
    if (strsSize > 1){
        char break_property = 0, num = 0;
        for (char i = 0; i < strsSize; i++){
            if (strlen(strs[i]) == 0){
                break_property = 1;
                break;
            }
        }
        if (!break_property){
            while ((!break_property) && (strlen(strs[0]) >= num)){
                num++;
                pre = (char*) realloc(pre, num*sizeof(char));
                pre[num-1] = strs[0][num-1];
                for (char i = 1; i < strsSize; i++){
                    if (pre[num-1] != strs[i][num-1]){
                        break_property = 1;
                        break;
                    }
                }
            }
            pre[num-1] = 0;
        }
        else{
            pre = (char*) malloc(sizeof(char));
            pre[0] = 0;
        }
    }
    else if (strsSize == 0){
        pre = (char*) malloc(sizeof(char));
        pre[0] = 0;
    }
    else{
        pre = (char*) malloc(200*sizeof(char));
        strcpy(pre,strs[0]);
    }
    return pre;
}
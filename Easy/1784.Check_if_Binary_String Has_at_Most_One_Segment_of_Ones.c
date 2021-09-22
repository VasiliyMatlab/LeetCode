#include <stdbool.h>

bool checkOnesSegment(char *s) {
    if (strlen(s) == 1) {
        if (s[0] - '0')
            return true;
        return false;
    }
    bool isprev = true;
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] - '0') {
            if (isprev)
                continue;
            return false;
        }
        else
            isprev = false;
    }
    return true;
}
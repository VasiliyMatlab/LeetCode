#include <stddef.h>

char slowestKey(int *releaseTimes, int releaseTimesSize, char *keysPressed) {
    int *time = (int *) malloc(releaseTimesSize*sizeof(int));
    time[0] = releaseTimes[0];
    int max_time = releaseTimes[0];
    for (int i = 1; i < releaseTimesSize; i++) {
        time[i] = releaseTimes[i] - releaseTimes[i-1];
        max_time = (max_time < time[i]) ? time[i] : max_time;
    }
    int size = 0;
    char *str = NULL;
    for (int i = 0; i < releaseTimesSize; i++) {
        if (time[i] == max_time) {
            size++;
            str = (char *) realloc(str, size*sizeof(char));
            str[size-1] = keysPressed[i];
        }
    }
    char c = str[0];
    for (int i = 1; i < size; i++)
        c = (c < str[i]) ? str[i] : c;
    return c;
}
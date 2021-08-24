#include <stdbool.h>

bool judgeCircle(char * moves){
    int x = 0, y = 0;
    while (*moves) {
        switch (*moves) {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            default:
                printf("Error");
                exit(1);
        }
        moves++;
    }
    return !x && !y;
}
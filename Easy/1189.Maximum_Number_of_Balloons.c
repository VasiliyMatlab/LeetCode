int maxNumberOfBalloons(char *text) {
    int letters[5] = {0, 0, 0, 0, 0};
    for (int i = 0; text[i]; i++) {
        switch (text[i]) {
            case 'b':
                letters[0]++;
                break;
            case 'a':
                letters[1]++;
                break;
            case 'l':
                letters[2]++;
                break;
            case 'o':
                letters[3]++;
                break;
            case 'n':
                letters[4]++;
                break;
            default:
                break;
        }
    }
    letters[2] /= 2;
    letters[3] /= 2;
    int count = letters[0];
    for (int i = 1; i < 5; i++)
        count = (count <= letters[i]) ? count : letters[i];
    return count;
}
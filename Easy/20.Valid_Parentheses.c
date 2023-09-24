#include <stdbool.h>

bool isValid(char * s){
    bool logic = true;
    char reg[10000];
    int ireg = 0;
    reg[0] = s[0];
    for (int i = 1; i < strlen(s); i++){
        switch (s[i]){
            case '(':
                ireg++;
                reg[ireg] = '(';
                break;
            case '[':
                ireg++;
                reg[ireg] = '[';
                break;
            case '{':
                ireg++;
                reg[ireg] = '{';
                break;
            case ')':
                if (ireg < 0)
                    logic = false;
                else if (reg[ireg] == '('){
                    reg[ireg] = 0;
                    ireg--;
                }
                else
                    logic = false;
                break;
            case ']':
                if (ireg < 0)
                    logic = false;
                else if (reg[ireg] == '['){
                    reg[ireg] = 0;
                    ireg--;
                }
                else
                    logic = false;
                break;
            case '}':
                if (ireg < 0)
                    logic = false;
                else if (reg[ireg] == '{'){
                    reg[ireg] = 0;
                    ireg--;
                }
                else
                    logic = false;
                break;
        }
        if (logic == false)
            break;
    }
    if (reg[0] != 0)
        logic = false;
    return logic;
}
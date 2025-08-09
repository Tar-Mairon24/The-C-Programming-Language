#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\' 

int main() { 
    int c;
    int blank_flag = 0;

    while ((c = getchar()) != EOF) {
        if(c == TAB) {
            putchar('\\');
            putchar('t');
            continue;
        }
        else if(c == BACKSPACE){
            putchar('\\');
            putchar('b');
            continue;
        }
        else if(c == BACKSLASH){
            putchar('\\');
            putchar('\\');
            continue;
        }
        else {
            putchar(c);
        }
    }
}
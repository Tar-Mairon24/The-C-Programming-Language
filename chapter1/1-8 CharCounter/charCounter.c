#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

int main() {
    int c, bl = 0, tb = 0, nw = 0;

    while((c = getchar()) != EOF){
        if(c == BLANK)
            bl++;
        if(c == TAB)
            tb++;
        if(c == NEWLINE)
            nw++;
    }
    printf("There were %d blanks\n", bl);
    printf("There were %d tabs\n", tb);
    printf("There were %d new lines\n", nw);
}
#include <stdio.h>

#define BLANK ' '

int main() { 
    int c;
    int blank_flag = 0;

    while ((c = getchar()) != EOF) {
        if(c == BLANK){
            if(!blank_flag) {
                putchar(c);
                blank_flag = 1;
            }
        } else {
            putchar(c);
            blank_flag = 0;
        }
    }
}
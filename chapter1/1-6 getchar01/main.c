#include <stdio.h>

int main(){
    int c;

    while (c = getchar() != EOF)
        printf("c = %d\n", c);
    printf("c = %d\n", c);
}
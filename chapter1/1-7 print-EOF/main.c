#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF){
        continue;
    }
    printf("%d\n", c);
    return 0;
}
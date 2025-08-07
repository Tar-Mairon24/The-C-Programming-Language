#include <stdio.h>

int main () {
    float fahr, celsius, lower, upper, step;

    lower = 0;
    upper = 100;
    step = 1;

    celsius = lower;

    printf("Celsius to Fahrenheit Table\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("\t%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
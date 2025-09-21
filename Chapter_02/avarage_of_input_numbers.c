#include <stdio.h>

int main () {
    int a, b, c;
    float avg;

    printf("Enter Number A: ");
    scanf("%d", &a);
    printf("Enter the Number B: ");
    scanf("%d", &b);

    printf("Enter the Number C: ");
    scanf("%d", &c);

    avg = (float)  (a + b + c) / 3;

    printf("The avarage of the 3 Numbers is : %f", avg);
}
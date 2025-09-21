#include <stdio.h>

int main()
{

    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    // check if a number is odd or even

    // printf("%d", num % 2 == 0);

    // check if a number is greater than 9 & less than 100

    // printf("%d", (num > 9) && (num < 100));
    printf("%d", num > 9 & num < 100);

    return 0;
}
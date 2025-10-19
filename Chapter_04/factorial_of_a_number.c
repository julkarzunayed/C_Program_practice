
// Print The Factorial of a Number
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        // printf("%i", i);
        factorial = factorial * i;
    }

    printf("\nThe factorial of %d is : %d", n, factorial);
}
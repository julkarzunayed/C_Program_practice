

#include <stdio.h>

int largeNumber();
int primeNumbers();

int main()
{

    // largeNumber();

    primeNumbers();

    return 0;
}

int primeNumbers()
{
    int i, j, isPrime, n;

    printf("Enter the series number: ");
    scanf("%d", &n);

    printf("The prime numbers are: ");

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d, ", i);
        }
    }
}

int largeNumber()
{
    int a, b, c;

    printf("Enter Three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("The large Number is: %d", a);
        }
        else
            printf("The large Number is: %d", c);
    }
    else
    {
        if (b > c)
        {
            printf("The large number is: %d", b);
        }
        else
            printf("The large Number is: %d", c);
    }
}
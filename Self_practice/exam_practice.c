

#include <stdio.h>

int largeNumber();
int primeNumbers();

int main()
{
    
    // largeNumber();

    return 0;
}

int primeNumbers()
{
    
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
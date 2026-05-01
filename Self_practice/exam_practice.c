

#include <stdio.h>

int largeNumber();
int primeNumbers();
int nationalFlag();

int main()
{

    // largeNumber();

    // primeNumbers();

    nationalFlag();

    return 0;
}

int nationalFlag()
{
    // int i, j, row = 16, col = 32;
    // int c_row = row / 2;
    // int c_col = col / 2;

    // for (i = 1; i <= row; i++)
    // {
    //     for (j = i; j <= col; i++)
    //     {
    //         if ((i - c_row) * (i - c_row) + (j - c_col) * (j - c_col) <= 3 * 3)
    //         {
    //             printf("*");
    //         }
    //         else
    //             printf("#");
    //     }
    //     printf("\n");
    //     return 0;
    // }

    // Width and height of the flag
    int width = 100;
    int height = 20;

    // Center of the red disc (slightly to the left is traditional, 
    // but we'll center it for visual balance here)
    int centerX = width / 10 * 4; 
    int centerY = height / 2;
    
    // Radius of the disc
    int radius = 8;

    for (int y = 0; y <= height; y++) {
        for (int x = 0; x <= width; x++) {
            
            // Calculate distance from the center using the circle formula
            // We adjust x by 0.5 because characters are taller than they are wide
            float dx = (x - centerX) * 0.5; 
            float dy = (y - centerY);
            
            if ((dx * dx) + (dy * dy) <= (radius * radius)) {
                // The Red Disc
                printf("*");
            } else {
                // The Green Field
                printf(".");
            }
        }
        // Move to the next line after finishing a row
        printf("\n");
    }
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
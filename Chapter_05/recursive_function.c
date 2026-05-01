#include <stdio.h>
void printHW(int n);
int sumOfNSeries(int n);
int factorialOfN(int n);

int main()
{
    int n ; // You can change this value to print "Hello World" a different number of times

    printf("Enter the number: ");
    scanf("%d", &n);

    // printHW(n);

    // printf("Summation of the series is: %d", sumOfNSeries(n));

    printf("Factorial of %d is: %d", n, factorialOfN(n));

    return 0;
}

//  Recursive function is a function that calls itself in order to solve a problem. It typically has a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems. In this example, the function printHW prints "Hello World" n times by calling itself with n-1 until it reaches the base case where n is 0.

void printHW(int n) // Function to print "Hello World" n times

{
    if (n == 0)
    {
        return;
    }
    printf("Hello World\n");

    printHW(n - 1);
}

int sumOfNSeries(int n)
{
    if (n == 1)
        return 1;

    int sumToN = sumOfNSeries(n - 1) + n;

    int sum = sumToN;
    return sum;
}


int factorialOfN(int n)
{
    if (n == 1)
        return 1;
    int factorial = factorialOfN(n -1) * n;

    return factorial;
}
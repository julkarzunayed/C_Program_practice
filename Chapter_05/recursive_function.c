#include<stdio.h>      
void printHW(int n);

int main ()
{
    int n;

    printf("Enter the number of times to print: ");
    scanf("%d", &n);

    printHW(n);
    return 0;
}


//  Recursive function is a function that calls itself in order to solve a problem. It typically has a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems. In this example, the function printHW prints "Hello World" n times by calling itself with n-1 until it reaches the base case where n is 0.

void printHW(int n) // Function to print "Hello World" n times
{
    if(n == 0)
    {
        return;
    }
    printf("Hello World\n");

    printHW(n-1);
}
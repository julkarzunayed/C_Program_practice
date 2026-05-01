#include<stdio.h>
void table(int a);

int main()
{
    int a;
    printf("Enter the number: ");

    scanf("%d", &a);

    printf("The table of %d is: \n", a);
    table(a);

}

void table(int a )
{
    for (int i =1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
}
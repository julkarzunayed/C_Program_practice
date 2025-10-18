#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("This is Upper case. \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("This is Lower case. \n");
    }
    else
    {
        printf("This is not an English character. \n");
    }
}
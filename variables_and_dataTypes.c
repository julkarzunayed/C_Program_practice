#include <stdio.h>

int main()
{
    int age = 14;
    char character = '*';
    // printf("My age is : %d \n", age);
    // printf("The character is : %c \n", character);
    // printf("The age is : %d and the character is: %c \n", age, character);
    // printf("The age is : %d and the character is: %c", character, age); // this not valid way

    int myAge;
    printf("Enter Your age: ");
    scanf("%d", &myAge);
    printf("Your age is : %d ", myAge);


    return 0;
}
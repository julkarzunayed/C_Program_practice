#include <stdio.h>

int main () {
    int age;

    printf("From the Ternary \nEnter a age: ");
    scanf("%d", &age);

    age > 18 ? printf("You are an Adult. \n") : printf("You are not an Adult. \n") ;
}
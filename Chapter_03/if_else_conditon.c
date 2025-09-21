#include <stdio.h>

int main () {
    int age;

    printf("Enter Your age: ");
    scanf("%d", &age);

    if(age <18) {
        printf("You are not an Adult \n");
    }
    else {
        printf("You are an Adult \n");
    }

    if (age < 13)
    {
        printf("Your are a Child. \n");
    } 
    else if (age < 18)
    {
        printf("You are a Teenager. \n");
    }
    else
    {
        printf("You are an Adult \n");
    }
    
    
    
}
# include <stdio.h>

//Calculation of the area of a radius
int main() {
    float radius;

    printf("Enter the value of the radius: ");
    scanf("%f", &radius);

    printf("The area is: %f", 3.1416 * radius * radius);
    return 0;
}
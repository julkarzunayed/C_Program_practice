#include <stdio.h>

float circle();

int main()
{
    int r;
    float circleArea;

    printf("Enter the value of Radius: ");

    scanf("%d", &r);

    circleArea = circle(r);

    printf("The area of the Circle is: %f ", circleArea);
}

float circle(int a)
{
    float circleArea;
    
    circleArea = 3.1416 * a * a;
    // printf("\nyou entered %f", circleArea);

    return circleArea;
}
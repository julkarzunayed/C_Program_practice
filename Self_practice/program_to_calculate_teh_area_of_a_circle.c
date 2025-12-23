#include<stdio.h>

int circle () ;

int main () {
    int r, circleArea;
    printf("Enter the value of Radius.");

    scanf("%d", &r);

    circle(r);
}

int circle(int a) {
    printf("\nyou entered %d", a);
}
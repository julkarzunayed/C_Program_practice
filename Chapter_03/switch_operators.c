#include <stdio.h>

int main()
{
    int day; // 1= sut, 2 = sun, 3 = mon, 4 = tuse, .....
    printf("Enter a Day(1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday \n");
        break;
    case 2:
        printf("Sunday \n");
        break;
    case 3:
        printf("Monday \n");
        break;
    case 4:
        printf("Tuseday \n");
        break;
    case 5:
        printf("Wednesday \n");
        break;
    case 6:
        printf("Thursday \n");
        break;
    case 7:
        printf("Friday \n");
        break;
    default:
        printf("Not a Valid day! \n");
    }

    return 0;
}
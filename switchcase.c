#include <stdio.h>
int main()
{
    int day;
    printf("enter the 1 to 7; ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("its monday");
        break;
    case 2:
        printf("its tuesday");
        break;
    case 3:
        printf("its wednesday");
        break;
    case 4:
        printf("its thursday");
        break;
    case 5:
        printf("its friday");
        break;
    case 6:
        printf("its saturday");
        break;
    case 7:
        printf("its sunday");
        break;
    default:
        printf("enter between 1 to 7 only");
        break;
    }
}
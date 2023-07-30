#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    printf("Enter a month number");
    scanf("%d",&m);
    if(m>12)
        printf("It is not a month");
    else
    switch(m)
    {
        case 1:printf("January\n31 days in the month");break;
        case 2:printf("February\n28 days in the month");break;
        case 3:printf("March\n31 days in the month");break;
        case 4:printf("April\n30 days in the month");break;
        case 5:printf("May\n31 days in the month");break;
        case 6:printf("June\n30 days in the month");break;
        case 7:printf("July\n31 days in the month");break;
        case 8:printf("August\n31 days in the month");break;
        case 9:printf("September\n30 days in the month");break;
        case 10:printf("Octomber\n31 days in the month");break;
        case 11:printf("November\n30 days in the month");break;
        case 12:printf("December\n31 days in the month");break;

    return 0;
}

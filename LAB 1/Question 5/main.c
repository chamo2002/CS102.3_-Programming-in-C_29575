#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,ave,total;
    printf("Enter two decimal values:");
    scanf("%f %f", &x,&y);
    total=x+y;
    ave=total/2;
    printf("The average is %.2f", ave);
    return 0;
}

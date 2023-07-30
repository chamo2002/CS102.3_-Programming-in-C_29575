#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dt,tt,as;
    printf("Distance traveled in meters:\n");
    scanf("%f",&dt);
    printf("Taken time in seconds:\n");
    scanf("%f",&tt);
    as=dt/tt;
    printf("Average speed is %.2f", as);
    return 0;
}

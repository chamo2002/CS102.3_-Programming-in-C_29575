#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,high;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("The highest number is %d",x);
    else
    printf("The highest number is %d",y);

    return 0;
}

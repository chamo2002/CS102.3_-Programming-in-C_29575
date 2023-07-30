#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter two numbers :");
    scanf("%d, %d",&x,&y);
    if(x%y==0)
    printf("%d is a multiple of %d",x,y);
    else
    printf("%d is not a multiple of %d",x,y);

    return 0;
}

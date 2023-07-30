#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    int factorial=1;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num<0)
    printf("Not Calculateble.\n");
     else if (num==0)
    printf("factorial of %d is %d\n",num,1);
    else
    for(i=1;i<=num;i++);
    factorial+=i;
    printf("Factorial of %d is %d \n",num,factorial);


    return 0;
}

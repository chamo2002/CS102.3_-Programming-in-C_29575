#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nsalary,bsalary;
    char name[20];
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter your basic salary :");
    scanf("%d",&bsalary);

    if(bsalary<5000)
    nsalary=bsalary+(5*bsalary)/100;
    else if(5000<=bsalary&&bsalary<10000)
    nsalary=bsalary+(10*bsalary)/100;
    else
    nsalary=bsalary+(15*bsalary)/100;
    printf("New salary is %d",nsalary);

    return 0;
}

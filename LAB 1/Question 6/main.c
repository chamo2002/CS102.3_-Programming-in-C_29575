#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,birthyear;
    char name[20];
    printf("Enter your name:");
    scanf("%s", &name);
    printf("Enter your birth year:");
    scanf("%d", &birthyear);
    age=2023-birthyear;
    printf("%s\n", name);
    printf("Age is %d\n",age);
    return 0;
}

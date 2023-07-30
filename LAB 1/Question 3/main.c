#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    double c;
    char d[1];
    //input
    printf("Enter integer value:\n");
    scanf("%d", &a);
    printf("Enter float value:\n");
    scanf("%f", &b);
    printf("Enter double value:\n");
    scanf("%lf", &c);
    printf("Enter a character:\n");
    scanf("%s", &d);
    //output
    printf("The integer value is %d\n",a);
    printf("The float value is %f\n",b);
    printf("The double value is %f\n",c);
    printf("The character value is %s\n",d);
    return 0;
}

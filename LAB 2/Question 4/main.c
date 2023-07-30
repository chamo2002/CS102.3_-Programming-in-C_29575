#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Enter temperature in degrees fahrenheit\n");
    scanf("%f",&f);
    c=f-32*5/9;
    printf("Temperature in degrees celsius %.2f", c);
    return 0;
}

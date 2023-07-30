#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rad;
    printf("Enter the radius :");
    scanf("%f",&rad);
    printf("Diameter is %.2f\n",rad*2);
    printf("Circumferance is %.2f\n",2*rad*3.14159);
    printf("Area is %.2f\n",3.14159*rad*rad);

    return 0;
}

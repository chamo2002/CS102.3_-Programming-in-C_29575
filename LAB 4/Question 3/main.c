#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calcu;
    float r;
    printf("1.circumference of circle\n2.area of circle\n3.volume of sphere\n");
    printf("Select a number from above");
    scanf("%d", &calcu);

    printf("Input radius of the circle");
    scanf("%f", &r);

    switch(calcu)
    {
    case 1:printf("the circumference of circle is %.2f",2*3.14*r);break;
    case 2:printf("The area of circle is %.2f",3.14*r*r);break;
    case 3:printf("The volume of sphere is %.f",4*3.14*r*r*r/3);break;

    return 0;
}

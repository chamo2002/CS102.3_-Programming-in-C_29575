#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calcu;
    double num1, num2;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &calcu);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (calcu)
    {
        case 1:printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);break;
        case 2:printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);break;
        case 3:if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                printf("Error: Division by zero!\n");break;
        case 4:printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);break;
        default:
            printf("Invalid choice! Please select a number from 1 to 4.\n");break;

    return 0;
}

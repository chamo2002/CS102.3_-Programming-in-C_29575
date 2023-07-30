#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    int remainder;
    while (num > 0)
    {
       remainder = num % 10;
       sum += remainder;
       num = num / 10;
    }
    printf("Sum of digits: %d\n", sum);

    return 0;
}

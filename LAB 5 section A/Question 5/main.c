#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, R_Num = 0;
     printf("Enter a number: ");
     scanf("%d", &num);
     do
        {
           int digit = num % 10;
          R_Num = R_Num * 10 + digit;
           num = num / 10;
        } while (num> 0);
     printf("Reversed number: %d\n", R_Num);

    return 0;
}

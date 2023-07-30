#include <stdio.h>
#include <stdlib.h>

int main()
{
         int num, O_Num, remainder, result = 0;
     int n = 0;
     printf("Enter a number: ");
     scanf("%d", &num);
     O_Num = num;
    while (O_Num != 0)
     {
      O_Num /= 10;
      n++;
     }
    O_Num = num;
   while (O_Num != 0)
     {
          remainder = O_Num% 10;
          result += pow(remainder, n);
          O_Num /= 10;
     }
   if (result == num)
       printf("%d is an Armstrong number.\n", num);
   else
       printf("%d is not an Armstrong number.\n", num);

    return 0;
}

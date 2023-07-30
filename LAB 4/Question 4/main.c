#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t;
    printf("Enter a letter");
    scanf("%c", &t);

    switch(t)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':printf("This is a vowel letter");break;
       default:printf("This is not a vowel letter");break;


    return 0;
}

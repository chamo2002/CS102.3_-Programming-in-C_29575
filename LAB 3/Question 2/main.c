#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max,low;
    printf("Enter three numbers :");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    if(n2>max)
    max=n2;
    if(n3>max)
    max=n3;
    printf("the highest number is %d\n",max);
    low=n2;
    if(n1<low)
    low=n1;
    if(n3<low)
    low=n3;
    printf("The lowest number is %d",low);

    return 0;
}

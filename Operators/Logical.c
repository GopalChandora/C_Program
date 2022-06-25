/*
Logical - Used to comnbine more than one condition.
1. And  && Used to satisfied all condition
2. Or  ||  Used to satisfied nay one condition
3. Not ! 
*/

#include<stdio.h>

int main()
{   int a,b;
    printf("Enter two numbers:");
    scanf("%d%d;",&a,&b);
    printf("%d&&%d=%d\n",a,b,(a&&b)); 
    printf("%d||%d=%d\n",a,b,(a||b));
    printf("!%d=%d\n",a,(!a));
    printf("!%d=%d\n",!b,(!b));
    return 0;
}
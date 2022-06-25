/*
Bitwise - Deals with bit (0 or 1)
1. AND  &
2. OR   |
3. XOR  ^
4. Left Shifter  << (*2 every shift)
5. Right Shifter  >> (/2 every shift)
*/

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    printf("Result=%d\n",a&b);  
    printf("Result=%d\n",a|b);
    printf("Result=%d\n",a^b);
    printf("Result=%d\n",a<<b);
    printf("Result=%d\n",a>>b);
    return 0;
}


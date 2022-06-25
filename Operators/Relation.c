/* 
Relation Operators
1. Equal =
2. Greater <
3. Lesser >
4. Greater and Equal >= 
5. Lesser and Equal <=
6. Not Equal !=
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a=5,b=5,result;
    printf("a = %d, b= %d",a,b);
    
    result=(a==b);
    printf("a is equal to b %d\n", result);

    result=(a>b);
    printf(" a ois greater than b %d\n", result);

    result=(a<b);
    printf("a is Less than b %d\n", result);

    result=(a>=b);
    printf("a is greater or equal to b %d\n", result);

    result=(a<=b);
    printf("a is less than or equal to b %d\n", result);
    
    result=!(a!=b);
    printf("(a is not equal to b %d\n", result);

    return 0;
}

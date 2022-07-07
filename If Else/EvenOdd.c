/*
To Check whether number is Even or Odd 
IF number is divisible by 2 and remainder = 0 then Even
Else Odd
*/

#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number to check Even or Odd :\t");
    scanf("%d",&num);
    if (num % 2 == 0) //condition for even
    {
        printf("%d is Even Number",num);
    }
    else
    {
        printf("%d is Odd Number",num);
    }
}


/*{
    int num;
    printf("Enter a number to check Even or Odd :\t");
    scanf("%d",&num);
    if (num % 2 != 0) //condition for Odd
    {
        printf("%d is Odd Number",num);
    }
    else
    {
        printf("%d is Even Number",num);
    }
}*/
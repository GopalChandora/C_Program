/*Datatype Type casting
syntax 
(datatype) variable_name;*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a=10;
    float b = 3.14;
    printf("Value of a %d",a);
    printf("\nValue of b %f",b);
    printf("\nValue of a %f",(float)a);
    printf("\nValue of b %d",(int)b);
}

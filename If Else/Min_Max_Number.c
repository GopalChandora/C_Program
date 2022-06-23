/*To Find Maximum and Minimum Number.

Syntax:

if(Condition)
{
    //Expressions
}
else
{
    //Expressions
}

Note: Not for equal numbers 
Example num1 = 5 and num2 = 5
*/

#include<stdio.h>

int main()
{
    // Without taking input from user
    int num1=5,num2=10; //declared and assigned values to variable simultaneously
    if(num1>num2) //It will Check condition
    {
        printf("Number %d is Maximum and Number %d Minimum: ",num1,num2);
    }
    else
    {
        printf("Number %d is Maximum and Number %d Minimum: ",num2,num1);
    }
    return 0;
}

/*{
    // Taking input from user
    int num1,num2;
    printf("Enter Two numbers: \n");
    scanf("%d%d",&num1,&num2); //Taking two Numbers Simultaneously
    if(num1>num2)
    {
        printf("Number %d is Maximum and Number %d Minimum: ",num1,num2);
    }
    else
    {
        printf("Number %d is Maximum and Number %d Minimum: ",num2,num1);
    }
    return 0;
}*/

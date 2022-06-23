// Addition of two numbers with and without taking input from user

/* For Multiline Comment */
// For single line comment

#include<stdio.h>
#include<conio.h>

void main()
{
    //without Taking input from user
    int num1=5, num2=5, result;
    result = num1+num2;
    printf("Addition of %d + %d = %d",num1,num2,result);
    printf("Addition of %d + %d = %d",num1,num1,(num1+num2)); //without any third varialble
}

/*{
    // Taking input from User 
    int num1,num2,result;
    printf("Enter First Number: ");
    scanf("%d",&num1);    
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    result = num1+num2;
    printf("Addition of %d + %d = %d",num1,num2,result);
    printf("Addition of %d + %d = %d",num1,num1,(num1+num2));
}*/

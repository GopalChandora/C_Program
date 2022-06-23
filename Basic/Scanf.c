/*scanf is used to take input from user and store it into a varible 
Syntax: scanf("%datatype",&varible_name);*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num); //Taking input
    printf("User entered number %d",num);
}
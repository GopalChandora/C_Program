// Array in Reverse Order

#include<stdio.h>

int main()
{
int a[100],n,i;
    printf("Enter the size\n");
    scanf("%d",&n);
   printf("Enter the Element\n"); 
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("There are %d Elements and Reverse Order is : \n",n);
    for(i=n-1;i>=0;i--)
    {
    printf("\n%d",a[i]);
    }
    return 0;
}
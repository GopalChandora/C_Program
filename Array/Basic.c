/*
Basic of Array
Datatype variable_name[Size] --- a[10]
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    //initialise and declared
    int a[10]={1,2,3,4,5,6,7,8,9,10},i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }  
}

/*{
    int a[10],i;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the value of Element at %d ",i);
        scanf("%d",&a[i]);
    }
    for( i = 0; i < 10; i++)
    {
        printf("\nThe Elements at %d is %d",i,a[i]);
    }
}*/

/*{
    // To prit Negative Elements
    int a[100],i,n,count=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the value at %d\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nNegative Elements are");
    for ( i = 0; i < n; i++)
    {
        if(a[i]<0)
        {
            //count++;
            printf("\t%d",a[i]);
        }
    }
    //printf("Count of Negative Element = %d",count);    
}*/

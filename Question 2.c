/* Write a function to find the smallest number from the given array of any size. (TSRS)    */

#include<stdio.h>

int smallest_number(int [] );

int main()
{
    int a[10],i;

    for(i=0;i<=9;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    printf("\n smallest number is -> %d",smallest_number(a));
}

int smallest_number(int a[] )
{
    int min=a[1],i;

    for(i=0;i<=9;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}

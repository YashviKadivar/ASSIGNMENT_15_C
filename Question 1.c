/* Write a function to find the greatest number from the given array of any size. (TSRS)    */

#include<stdio.h>

int greatest_number(int [] );

int main()
{
    int a[10],i;

    for(i=0;i<=9;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    printf("\n greatest number is -> %d",greatest_number(a));
}

int greatest_number(int a[] )
{
    int max=a[1],i;

    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}

/*  Write a function in C to read n number of values in an array and display it in reverse
    order.  */

#include<stdio.h>

void reverse_display(int [] );

int main()
{
    int a[10],i;

    for(i=0;i<=9;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    reverse_display(a);
}

void reverse_display(int a[] )
{
    int i;

    for(i=9;i>=0;i--)
    {
       printf("\n %d",a[i]);
    }

}


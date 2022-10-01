/* Write a function in C to merge two arrays of the same size sorted in descending
    order.  */

#include <stdio.h>

void sorting_merg(int[], int[]);

int main()
{
    int i,a[5], b[5];

    for ( i = 0; i <= 4; i++)
    {
        printf("\n Enter a value->");
        scanf("%d", &a[i]);
    }

    for ( i = 0; i <= 4; i++)
    {
        printf("\n Enter a value->");
        scanf("%d", &b[i]);
    }

    sorting_merg(a, b);
}
void sorting_merg(int a[], int b[])
{
    int size=10;
    int c[size];
    int i,j=0;

    for( i=0;i<size/2;i++)
    {
        c[i]=a[i];
    }

    for( i=size/2;i<size;i++)
    {
        c[i]=b[j++];
    }

    for ( i = 0; i <= 8; i++)
    {
        for ( j = i + 1; j <= 9; j++)
        {
            if (c[i] < c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for( i=0;i<=9;i++)
        printf("\n %d",c[i]);
}

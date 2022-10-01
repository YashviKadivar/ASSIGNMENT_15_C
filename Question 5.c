/* Write a function to find the first occurrence of adjacent duplicate values in the array.
    Function has to return the value of the element.    */

#include<stdio.h>

int first_occurrence(int[]);

int main()
{
    int a[10],i;

    for(i=0;i<=4;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    printf("\n index number -> %d",first_occurrence(a));

    return 0;
}

int first_occurrence(int a[5])
{
    int i,j,dup=a[1];

    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]==a[j])
            {
                printf("\n Duplicate value->%d",a[j]);
                return j;
            }
        }
    }

    return 1;
}

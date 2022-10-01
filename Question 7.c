/* Write a function in C to count a total number of duplicate elements in an array. */

#include<stdio.h>

int duplicate_elements(int [] );

int main()
{
    int a[7],i;

    for(i=0;i<=6;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    printf("\n total duplicate numbers -> %d",duplicate_elements(a));
}

int duplicate_elements(int a[] )
{
    int i,j,count=0;

    for(i=0;i<=6;i++)
    {
       for(j=i+1;j<=6;j++)
       {
           if(a[i]==a[j])
            {
                count++;
                break;
            }
       }
    }

    return count;

}



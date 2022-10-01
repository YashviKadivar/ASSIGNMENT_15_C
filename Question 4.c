/* Write a function to rotate an array by n position in d direction. The d is an indicative
    value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
    d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

    */

#include<stdio.h>

int main()
{
    int a[5],i,r=0;
    char d;

    for(i=0;i<=4;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    printf("\n Enter number of rotation->");
    scanf("%d",&r);

    printf("\n Enter direction->");
    scanf("%d",&d);

    if(d=="left")
    {
        while(r)
        {
            int temp=a[0],i;

            for(i=1;i<=4;i++)
            {
                a[i-1]=a[i];
            }
            a[4]=temp;
            r--;
        }
    }
    else
    {
        while(r)
        {
            int temp=a[4],i;

            for(i=3;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=temp;
            r--;
        }
    }

    for(i=0;i<=4;i++)
    {
        printf("\n %d",a[i]);
    }
}

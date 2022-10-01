/* Write a function in C to count the frequency of each element of an array.    */

#include<stdio.h>

int main()
{
    int a[5], i,count=1;

    for ( i = 0; i <= 4; i++)
    {
        printf("\n Enter a value->");
        scanf("%d", &a[i]);
    }

    for ( i = 0; i <= 4; i++)
    {
        int j,count=1;

        for ( j = i + 1; j <= 4; j++)
        {
            if(a[i]==-1)
            break;

            if (a[i]==a[j])
            {
                count++;
                a[j]=-1;
            }
        }

        if(a[i]!=-1)
        printf("frequency of %d is %d\n",a[i],count);
    }
}

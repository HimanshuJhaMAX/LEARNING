/*
1
22
333
4444
*/

#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    return 0;
}
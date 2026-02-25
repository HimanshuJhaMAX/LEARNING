#include<stdio.h>
int main () 
{
    int i , j,n;
    printf ("Enter a number:");
    scanf("%d",&n);
    for (i=n;i>=n;i--)
    {
        for (j=n;j>=i;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
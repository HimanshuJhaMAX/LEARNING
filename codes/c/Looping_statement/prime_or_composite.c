#include<stdio.h>
int main()
{
    int i , count=0,n;
    printf ("Enter number:");
    scanf("%d",&n);
    
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\n%d is prime",n);
    }
    else
    {
        printf("\n%d is not prime",n);
    }
    return 0;
}
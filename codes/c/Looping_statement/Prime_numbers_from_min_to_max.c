#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
    int i,j,count,m,n;
    printf("Enter minimum and maximum number:");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        count = 0;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                count=1;
            }
        }
        if(count==0)
            {
                printf("%d",i);
            }
    } 
    return 0;
}
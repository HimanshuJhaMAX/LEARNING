#include<stdio.h>
#include<string.h>
int main ()
{
    char str[] = "KATHFORD";
    
    int i, j, len=0;
    len = strlen(str);
    printf("Pattern 1 ");
    for (i=1;i<=len;i++)
    {
        for(j=0 ; j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    printf("Pattern 2");
    for (i=1;i<=len;i++)
    {
        for(j =0;j<len-1;j++)
        {
            printf(" ");
        }
        for(j=0 ; j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0 ;
}
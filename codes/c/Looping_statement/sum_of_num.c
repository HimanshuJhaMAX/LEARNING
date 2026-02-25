#include<stdio.h>
int main()
{
    int i , n;
    float sum = 0, avg , num;
    printf("Enter n:");
    scanf("%d",&n);
    for (i = 1; i<=n;i++)
    {
        printf("\nEnter %dst number:",i);
        scanf("%f",&num);
        sum = sum + num;
    }
    printf("\nThe sum of numbers are: %0.2f",sum);
    return 0;
}
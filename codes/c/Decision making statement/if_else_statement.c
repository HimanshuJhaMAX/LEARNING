#include<stdio.h>
int main()
{
int num;
printf("Enter a positive integer: ");
scanf("%d", &num);
if(num%2 == 0)
{
printf("%d is EVEN.",num);
}
else
{
printf("%d is ODD.",num);
}
return 0;
}
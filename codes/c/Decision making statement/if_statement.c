#include<stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if(num>8)
{
num = num+15;
}
printf("Output is %d", num);
return 0;
}
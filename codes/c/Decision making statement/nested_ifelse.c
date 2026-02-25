//Program to find largest form three numbers given by user.

#include<stdio.h>
int main()
{
int num1, num2, num3;
printf("Enter three numbers:\n");
scanf("%d%d%d",&num1, &num2, &num3);
if(num1>num2)
{
if(num1>num3)
{
printf("Largest = %d", num1);
}
else
{
printf("Largest = %d", num3);
}
}
else
{
if(num2>num3)
{
printf("Largest = %d", num2);
}
else
{
printf("Largest = %d", num3);
}
}
return 0;
}
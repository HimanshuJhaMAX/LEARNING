#include<stdio.h>
int main()
{
int num, rem, rev=0, copy;
printf("Enter number: ");
scanf("%d", &num);
copy = num;
while(num!=0)
{
rem = num%10;
rev = rev*10 + rem;
num = num/10;
}
if(rev==copy)
{
printf("PALINDROME");
}
else
{
printf("NOT PALINDROME");
}
return 0;
}
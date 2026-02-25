#include<stdio.h>
int main()
{
int num[100], i, n, odd=0, even=0;
printf("Enter n: ");
scanf("%d", &n);
/* Reading array */
printf("Enter numbers:\n");
for(i=0; i<n ; i++)
{
printf("num[%d] = ", i);
scanf("%d", &num[i]);
}
/* Counting Odd and Even */
for(i=0; i<n ; i++)
{
if(num[i]%2 == 0)
{
even = even + 1;
}
else
{
odd = odd + 1;
}
}
/* Displaying Result */
printf("Even Count = %d\n", even);
printf("Odd Count = %d", odd);
return 0;
}
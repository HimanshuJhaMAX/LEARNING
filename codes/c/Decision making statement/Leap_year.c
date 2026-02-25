#include<stdio.h>
int main()
{
int y;
printf("Enter year: ");
scanf(" %d ", &y);
if((y%400 == 0) || (y%4 == 0 && y%100 != 0))
{
    printf("%d is Leap Year.", y);
}
else
{
    printf("%d is not Leap Year.", y);
}
return 0;
}
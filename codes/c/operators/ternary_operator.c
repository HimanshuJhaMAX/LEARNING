#include<stdio.h>
int main()
{
float x,y;
printf("Enter x: ");
scanf("%f",&x);
y = x<0 ? x*x+4 : x*x-4;
printf("f(%f) = %f", x, y);
return 0;
}
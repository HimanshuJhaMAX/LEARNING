#include<stdio.h>
int main()
{
int a = 2, b = -3; // Unary minus
a++; // Post increment
b--; // Post decrement
++a; // Pre increment
b++; // Post increment
--b; // Pre decrement
printf("Value of a = %d\n",a);
printf("Value of b = %d", b);
return 0;
}
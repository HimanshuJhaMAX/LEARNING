#include<stdio.h>
#include<math.h>
int main() {
float x,y;
printf("Enter x: ");
scanf("%f",&x);
y=x<2?pow(x,7)+4*exp(x)-sqrt(x):pow(x,6)+5*log(x)+3*sqrt(x);
printf("f(%f) = %f", x, y);
return 0;
}
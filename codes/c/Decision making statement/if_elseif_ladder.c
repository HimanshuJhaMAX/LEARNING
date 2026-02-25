#include<stdio.h>
#include<math.h>
int main()
{
float a, b, c, d, r1, r2, rp, ip;
printf("Enter coefficients a, b and c: \n");
scanf("%f%f%f", &a, &b, &c);
d = b*b - 4*a*c;
if( d == 0)
{
r1 = -b / (2*a);
r2 = r1;
printf("Roots are real and equal.\n");
printf("Root1 = %f\n", r1);
printf("Root2 = %f", r2);
}
else if(d > 0)
{
r1 = (-b + sqrt(d))/ (2*a);
r2 = ( -b - sqrt(d))/(2*a);
printf("Roots are real and unequal.\n");
printf("Root1 = %f\n", r1);
printf("Root2 = %f", r2);
}
else
{
rp = -b/(2*a);
ip = sqrt(-d)/(2*a);
printf("Roots are Imaginary.\n");
printf("Root1 = %f + %f i\n", rp, ip);
printf("Root2 = %f - %f i", rp, ip);
}
return 0;
}
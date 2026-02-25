#include<stdio.h>
#include<math.h>
int main()
{
float a[5], sum1=0.0, sum2=0.0, mean, sd;
int i, n;
printf("Enter n:\n");
scanf("%d", &n);
/* Reading Array */
printf("Enter numbers:\n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%f",&a[i]);
}
/* Finding sum1 and mean */
for(i=0;i<n;i++)
{
sum1 = sum1 + a[i];
}
mean = sum1/n;
/* Finding sum2 and standard deviation */
for(i=0;i<n;i++)
{
sum2 = sum2 + (a[i] - mean)*(a[i] - mean);
}
sd = sqrt(sum2/n);
/* Displaying result */
printf("Standard deviation = %f", sd);
return(0);
}
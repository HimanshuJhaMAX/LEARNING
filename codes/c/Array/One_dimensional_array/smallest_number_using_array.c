#include<stdio.h>
int main()
{
float a[50], sm;
int i, n;
printf("Enter n: ");
scanf("%d", &n);
/* Reading array */
printf("Enter numbers:\n");
for(i=0;i<n;i++)
{
printf("a[%d] = ",i);
scanf("%f", &a[i]);
}
/* Finding small */
sm = a[0];
for(i=0;i<n;i++)
{
if(a[i]<sm)
{
sm = a[i];
}
}
printf("Small = %f", sm);
return 0;
}
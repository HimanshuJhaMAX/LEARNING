#include<stdio.h>
int main()
{
int a[3][3],b[3][3], s[3][3],i,j;
/* Reading First Matrix */
printf("Enter first matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
/* Reading Second Matrix */
printf("Enter second matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}
/* Adding */
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
s[i][j] = a[i][j] + b[i][j];
}
}
/* Displaying matrix */
printf("Added Matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",s[i][j]);
}
printf("\n");
}
return 0;
}
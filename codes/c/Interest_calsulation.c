#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,SI,CI;
    printf("Enter principle amount:\n");
    scanf("%f",&p);
    printf("Enter the time given:\n");
    scanf("%f",&t);
    printf("Enter the rate of interest:\n");
    scanf("%f",&r);
    SI=(p*t*r)/100;
    printf("SI = %2f",SI);
    CI=p*pow(1+r/100,t)*p;
    printf("CI = %2f",CI);
    return 0;
}
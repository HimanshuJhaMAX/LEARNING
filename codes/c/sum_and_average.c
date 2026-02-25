#include<stdio.h>
int main ()
{
    int i,n;
    float a[100],sum,average;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    //Reading array
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    //processing
    for(i=0;i<n;i++)
    {
        sum +=a[i];
    }
    average = sum/n;
    printf("Sum = %0.3f and Average = %0.3f.\n",sum,average);
    return 0;
}
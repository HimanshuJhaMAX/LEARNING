#include<stdio.h>
int fact(int x)
{
    int i, factorial=1 ;
    if (x ==1 || x ==0)
    return 1;
    for (i=1;i<=x;i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main ()
{
    int n=5,f;
    f = fact(n);
    printf("The factorial is : %d",f);
    return 0;
}
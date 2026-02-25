#include<stdio.h>
int main() 
{
    int a,b,c;
    a=2,b=3;
    a = (b++) + (++b) + a;
    c = a>b?a:b;
    b = (a++) + (++b) + a;
    c = a>b?a:b;
    b = (a++) + (b--) + a;
    c = c++ * b--;
    printf("a=%d\tb=%d\tc=%d",a,b,c);
    return 0;
}
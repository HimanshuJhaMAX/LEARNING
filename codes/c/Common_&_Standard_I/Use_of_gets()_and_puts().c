#include<stdio.h>
#include<conio.h>
int main ()
{
    char str [ 50 ];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    puts("You entered:");
    puts(str);
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[50];
    printf("Enter your name:");
    fgets (name,sizeof(name), stdin);
    printf("Your name is %s",name);
    return 0 ;
}
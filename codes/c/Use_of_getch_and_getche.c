#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Press a key using getch():\n");
    ch = getch();
    printf("You pressed:%c\n",ch);
    printf("\nPress a key using getche():");
    ch=getche();
    printf("\nYou pressed :%c");
    printf("\nEnter a character using getchar():");
    ch = getche();
    printf("\nYou entered:%c",ch);
    return 0;
}
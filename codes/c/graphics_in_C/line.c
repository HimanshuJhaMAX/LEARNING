#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main ()
{
    int gd = DETECT,gm;
    intitgraph(&gd,&gm,"c:\\TC\\BGI");
    line (100,100,400,300);
    getch();
    close graph();
    return 0;
}

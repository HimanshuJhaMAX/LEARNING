#include<stdio.h>
int main()
{
float a,b, r;
char op;
printf("Available Operations.\n");
printf("+ for Addition.\n");
printf("- for Subtraction.\n");
printf("* for Multiplication.\n");
printf("/ for Division.\n");
printf("Which Operation?\n");
scanf("%c", &op);
switch(op)
{
    case '+': printf("Enter two numbers:\n");
        scanf("%f%f",&a, &b);
        r = a+b;
        printf("%f + %f = %f", a, b, r);
        break;
    case '-': printf("Enter two numbers:\n");
        scanf("%f%f",&a, &b);
        r = a-b;
        printf("%f - %f = %f", a, b, r);
        break;
    case '*': printf("Enter two numbers:\n");
        scanf("%f%f",&a, &b);
        r = a*b;
        printf("%f * %f = %f", a, b, r);
        break;
    case '/': printf("Enter two numbers:\n");
        scanf("%f%f",&a, &b);
        if(b!=0)
        {
            r = a/b;
            printf("%f/%f = %f",a,b,r);
        }
        else
        {
            printf("Division not possible.");
        }
        break;
    default: printf("Invalid Operation.");
        break;
}
return 0;
}
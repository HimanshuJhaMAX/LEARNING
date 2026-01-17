#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("ASCII code of %d is: %d\n", num, num);
    printf("Character representation: %c\n", (char)num);
    getch();
    return 0;
}

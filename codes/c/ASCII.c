#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n=== Results ===\n");
    printf("ASCII code of %d is: %d\n", num, num);
    printf("Character representation: %c\n", (char)num);
    printf("================\n");
    
    return 0;
}

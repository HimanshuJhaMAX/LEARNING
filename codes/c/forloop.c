#include <stdio.h>

int main() 
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\n=== Loop Results ===\n");
    for(i = 0; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n====================\n");
    
    return 0;
}

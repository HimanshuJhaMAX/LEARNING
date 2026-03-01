//Write a program in C to read an array containing 5 numbers and display its content.

#include<stdio.h>

int main()
{
    int a[5] ,i ;
    //Reading array

    for (i=1;i<=5;i++)
    {
        printf("Enter elements of array:");
        scanf("%d",&a[i]);
    }
    //Displaying array
    printf("\nThe elements of array are:\n");
    for (i=1;i<=5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
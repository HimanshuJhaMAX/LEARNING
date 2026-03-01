//Write a program in C to count number of even numbers and odd numbers in a given array.

#include<stdio.h>
int main ()
{
    int n , str[50] ,odd , even ,i;
    printf("Enter the size of array:");
    scanf("%d",&n);

    //Reading array
    for (i=0;i<n;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&str[i]);
    }

    //Procrssing
    odd=0;
    even =0;
    for (i=0;i<n;i++)
    {
        if(str[i] %2 == 0 )
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("The count of odd and even is:\nodd=%d\teven=%d",odd,even);
    return 0;
}
#include<stdio.h>
int main ()
{
    int i , j ,size;
    float n[100][100] , largest;
    printf("Enter the size of matrix:");
    scanf("%d",&size);

    //Reading Matrix
    for(i=1;i<=size;i++)
    {
        for (j=1;j<=size;j++)
        {
            printf("Enter n[%d][%d]:",i,j);
            scanf("%f",&n[i][j]);
        }
    }
    //processing
    largest=n[0][0];
    for(i=1;i<=size;i++)
    {
        for (j=1;j<=size;j++)
        {
            if(largest<=n[i][j])
            {
                largest=n[i][j];
            }
        }
    }
    //Result
    printf("The largest element is %f",largest);
    return 0;
}
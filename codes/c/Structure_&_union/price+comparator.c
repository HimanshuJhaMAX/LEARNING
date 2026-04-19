#include<stdio.h>
#include<string.h>

struct book
{
    char name[59];
    char author[100];
    float price;
};
int main()
{
    int n,i,j;
    struct book temp;
    printf("Enter the number of books");
    scanf("%d",&n);
    struct book b[10];
    for (i=1 ; i<=n;i++)
    {
        printf("Enter book name:");
        scanf("%s",b[i].name);
        printf("Enter author name");
        scanf("%s",b[i].author);
        printf("Enter the price of book");
        scanf("%f",&b[i].price);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i-1;j++)
        {
            if(b[j].price > b[j+1].price)
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    printf("\n Books sorted by price:");
    printf("\n%s\t%s\t%s","Name","Author","Price");
    for (i=0;i<n;i++)
    {
        printf("\n%s\t%s\t%2f",b[i].name,b[j].author,b[i].price);
    }
    return 0;
}
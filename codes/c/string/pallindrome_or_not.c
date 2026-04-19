#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    int i, length=0, flag=0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    length = strlen(str);
    if (length > 0 && str[length-1] == '\n') {
        str[length-1] = '\0';
        length--;
    }
    for(i=0; i<length/2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}
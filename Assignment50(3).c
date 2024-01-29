#include <stdio.h>

int Small(char *str)
{

    if (*str == '\0') 
    {
        return 0;
    }
    else
    {
        int iSpace = (*str >= 'a' && *str <= 'z');

        return iSpace + Small(str + 1);
    }
}

int main()
{
    char str[100];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^\n]", str); 

    iRet = Small(str);
    printf("\nsmall letters count are : %d\n", iRet);

    return 0;
}

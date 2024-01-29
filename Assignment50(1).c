#include <stdio.h>

int WhiteSpace(char *str)
{

    if (*str == '\0') 
    {
        return 0;
    }
    else
    {
        int iSpace = (*str == ' ' || *str == '\t' || *str == '\n');

        return iSpace + WhiteSpace(str + 1);
    }
}

int main()
{
    char str[100];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^\n]", str); 

    iRet = WhiteSpace(str);
    printf("\nWhitespace count: %d\n", iRet);

    return 0;
}

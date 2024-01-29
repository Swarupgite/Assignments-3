#include<stdio.h>

int StrlenX(char * str)
{
    if (*str == '\0') 
    {
        return 0;
    }
    else
    {
        return 1 + StrlenX(str + 1);
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);

    printf("Length of string is : %d\n",iRet);
    return 0;

}

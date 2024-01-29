#include <stdio.h>

int Sum(int iNo)
{
    if (iNo == 0)
    {
        return 0;
    }
    else
    {
        return (iNo % 10) + Sum(iNo / 10);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);
    printf("%d",iRet);

    return 0;
}

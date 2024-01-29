#include <stdio.h>

int Max(int iNo)
{
    if (iNo == 0)
    {
        return 0;
    }

    int iDigit = iNo % 10;
    int remainingDigits = Max(iNo / 10);

    return (iDigit > remainingDigits) ? iDigit : remainingDigits;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Max(iValue);

    printf("The largest digit is: %d\n", iRet);

    return 0;
}

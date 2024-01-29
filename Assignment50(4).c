#include <stdio.h>

int Min(int iNo)
{
    if (iNo == 0)
    {
        return 9; 
    }
    else
    {
        int iDigit = iNo % 10;
        int remainingDigits = Min(iNo / 10);

        return (iDigit < remainingDigits) ? iDigit : remainingDigits;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    if (iRet == 9)
    {
        printf("No digits found in the entered number.\n");
    }
    else
    {
        printf("The Smallest digit is: %d\n", iRet);
    }

    return 0;
}

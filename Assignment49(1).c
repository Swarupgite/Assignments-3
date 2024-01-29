#include <stdio.h>

int Display(int iNo)
{
    if (iNo > 1)
    {
        printf("%d * ", iNo);
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    iRet = Display(iValue);
    printf("%d",iRet);

    return 0;
}

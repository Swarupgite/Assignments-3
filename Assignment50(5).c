#include<stdio.h>

int Reverse(int iNo)
{
    int static iDigit = 0;

    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo = iNo / 10;
        Reverse(iNo);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    return 0;
}

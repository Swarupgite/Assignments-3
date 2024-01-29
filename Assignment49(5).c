#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iSum += iDigit; 
        iNo = iNo / 10;
        Mult(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Mult(iValue);
    printf("\nSummation of digits : %d\n", iRet);

    return 0;
}

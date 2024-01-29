#include <stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if (iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    DisplayR(5);

    return 0;
}

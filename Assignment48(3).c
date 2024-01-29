#include <stdio.h>

void DisplayR(int iNo)
{
    if (iNo >= 1)
    {
        printf("%d\t", iNo);
        DisplayR(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}

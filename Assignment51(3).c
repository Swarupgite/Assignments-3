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
    DisplayR(5);

    return 0;
}

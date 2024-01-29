#include <stdio.h>

void DisplayR(int iNo)
{
    if (iNo >= 1 && iNo <= 26)
    {
        char letter = 'A';
        for (int i = 1; i <= iNo; i++)
        {
            printf("%c\t", letter);
            letter++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}

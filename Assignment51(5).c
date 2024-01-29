#include <stdio.h>

void DisplayR(int iNo)
{
    if (iNo >= 1 && iNo <= 26)
    {
        char letter = 'a';
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
    DisplayR(6);

    return 0;
}

#include <stdio.h>

int CountChar(char FName[], char targetChar)
{
    FILE *fp;
    char ch;
    int iCount = 0;

    fp = fopen(FName, "r");
    if (fp == NULL) 
    {
        printf("Unable to open the file.\n");
        return -1; 
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (targetChar == ch)
        {
            iCount++;
        }
    }

    fclose(fp);

    return iCount;
}

int main()
{
    char FileName[30];
    char targetChar;
    int charFrequency = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the character to count: ");
    scanf(" %c", &targetChar);

    charFrequency = CountChar(FileName, targetChar);

    if (charFrequency != -1)
    {
        printf("Frequency of character '%c' is: %d\n", targetChar, charFrequency);
    }

    return 0;
}

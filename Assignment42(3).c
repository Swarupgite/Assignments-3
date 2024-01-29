#include <stdio.h>

int CountWhite(char FName[])
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
        if (ch >= ' ')
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
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);

    if (iRet != -1)
    {
        printf("Number of White spaces are %d\n", iRet);
    }

    return 0;
}

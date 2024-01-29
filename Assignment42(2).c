#include <stdio.h>

int CountSmall(char FName[])
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
        if (ch >= 'a' && ch <= 'z')
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

    iRet = CountSmall(FileName);

    if (iRet != -1)
    {
        printf("Number of Small characters are %d\n", iRet);
    }

    return 0;
}

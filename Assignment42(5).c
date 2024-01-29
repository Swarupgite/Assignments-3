#include <stdio.h>
#include <stdlib.h>

void DisplayN(char FName[], int iSize)
{
    FILE *fp;
    char *buffer;
    int bytesRead;

    fp = fopen(FName, "r");

    if (fp == NULL)
    {
        printf("Unable to open the file.\n");
        return;
    }

    buffer = (char *)malloc(iSize + 1); 

    bytesRead = fread(buffer, 1, iSize, fp);

    buffer[bytesRead] = '\0';

    printf("Displaying first %d characters from %s:\n%s\n", iSize, FName, buffer);

    fclose(fp);

    free(buffer);
}

int main()
{
    char FileName[30];
    int iValue;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters to display: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}

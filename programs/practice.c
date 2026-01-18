#include <stdio.h>

void printPattern(int maxLine)
{
    int line = 1;

    while (line <= maxLine)
    {
        char sign = '*';

        int i = 0;
        while (i < line)
        {
            printf("%c", sign);
            i++;
        }

        printf("\n");

        line++;
    }
}

int main()
{
    int value = 4;
    scanf("%d", &value);
    printPattern(value);

    return 0;
}

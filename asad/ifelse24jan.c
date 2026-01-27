#include <stdio.h>

int main()
{
    int number;
    printf("Input: ");
    scanf("%d", &number);
    int i = 1;
    while (i < number)
    {
        i = i + 5;

        printf("hello\n");
    }

    return 0;
}

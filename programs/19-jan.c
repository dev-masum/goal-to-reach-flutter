#include <stdio.h>

int main()
{
    // printf("out of if else");

    // if (1)
    // {
    //     printf("if block");
    //     if (0)
    //     {
    //         printf("if block");
    //     }
    //     else if (0)
    //     {
    //         printf("else if 1 block");
    //     }
    //     else if (0)
    //     {
    //         printf("else if 2 block");
    //     }
    //     else
    //     {
    //         printf("else block");
    //     }
    // }
    // else if (0)
    // {
    //     printf("else if 1 block");
    // }
    // else if (0)
    // {
    //     printf("else if 2 block");
    // }
    // else
    // {
    //     printf("else block");
    // }

    int x = 1;

    while (x <= 5)
    {

        printf("%d\n", x);

        int y = 1;

        while (y <= 5)
        {
            printf("\t%d\n", y);
            y = y + 1;
        }

        x = x + 1;
    }

    return 0;
}

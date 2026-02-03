#include <stdio.h>

void func(int *a)
{
    *a = 6;

    // int i;
    // for (i = 0; i < 4; i++)

    printf(" %d", *a);
}

int main()
{
    int b = 10;

    // printf("Array Elements are ");

    func(&b);

    // int i;
    // for (i = 0; i < 4; i++)
    printf(" %d", b);
}
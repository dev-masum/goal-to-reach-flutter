#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    // 10++;
    // ++10;

    printf("%p\n", &ptr);

    int **ptr2 = &ptr;

    printf("%d\n", **ptr2);

    int ***ptr3 = &ptr2;

    printf("%d\n", ***ptr3);

    return 0;
}

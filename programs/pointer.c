// #include <stdio.h>

// int main()
// {
//     char x = 'a';
//     char *ptr = &x;

//     printf("%c\n address is: %p\n", *ptr, ptr);

//     *ptr++;

//     printf("%c\n address is : %p\n", *ptr, ptr);

//     // int y = 20;

//     // *ptr = y;

//     // printf("%d\n", *ptr);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int *ptr; // uninitialized pointer

    *ptr = 10; // ❌ illegal memory access

    return 0;
}

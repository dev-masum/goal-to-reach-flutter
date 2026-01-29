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
#include <stdlib.h>

int main()
{
    char *arr = "hello";
    // char *arr2 = "hello world";

    arr[0] = 'i';

    arr = "iello";

    printf("%s", arr);

    return 0;
}

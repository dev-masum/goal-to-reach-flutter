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
#include <string.h>
#define TRUE 1
#define False 0

typedef int bool;

int strLength(char *str)
{
    int length = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}

int main()
{
    char *arr = "hello";
    char arr2[20] = "hello";

    // printf("%p", arr2);

    bool isEqual = strcmp(arr2, arr);

    if (isEqual == TRUE)
    {
    }

    // char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // char arr2[] = {'j', 'e', 'l', 'l', 'o', '\0'};
    // int arr3[] = {1, 2, 3};
    // int arr4[] = {109, 2, 3};

    // arr[0] = 'j';

    // arr = "iello";

    // printf("%s", arr);

    // for (int i = 0; arr[i] != '\0'; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    // printf("\n");
    // for (int i = 0; arr2[i] != '\0'; i++)
    // {
    //     printf("%c", arr2[i]);
    // }

    // int len = strLength(arr);
    // printf("%s %s", arr, arr2);

    return 0;
}

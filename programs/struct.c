#include <stdio.h>

struct Result
{
    char ticket;
    int error;
};

int main()
{

    struct Result res;
    res.ticket = 't';
    res.error = -1;

    printf("address of res %d\n", res);

    return 0;
}

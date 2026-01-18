#include <stdio.h>
#include "my_lib.h"

static int x = 10;

static void increament()
{
    static int c = 0;

    c = c + 1;

    printf("%d", c);
}

int main()
{
    increament();
    increament();
    increament();

    x = 20;

    printf("%d", x);
}

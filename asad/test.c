#include <stdio.h>
#define pi 3.14
float z = 7;

void practice()
{
    float z = 5;
    static double b = 656;
    z = z + 1;
    printf("%lf \n", b);
    printf("1st variable %f \n", z);
    printf("%f", z);
}

int main()
{
    // int r = 5;

    // printf("area of circle %f", pi * r * r);

    practice();
}
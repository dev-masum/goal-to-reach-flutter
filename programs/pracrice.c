#include <stdio.h>

int main()
{
    float a;
    float b;
    printf("inter input 1=");
    scanf("%f", &a);
    printf("input=%f", a);
    printf("inter input 2=");
    scanf("%hd", &b);
    int x = (a - b);
    printf("show result x= %d", x);
    return 0;
}

#include <stdio.h>
#include <time.h>

int n;

int main()
{
    clock_t start, end;
    double cpu_time_used;

    printf("The Number Is: ");
    scanf("%d", &n);

    start = clock();
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + i;
    // }

    int sum = (n * (n + 1)) / 2;

    printf("The Sum Is: %d\n", sum);

    end = clock(); // end time

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Execution Time: %f seconds\n", cpu_time_used);

    return 0;
}

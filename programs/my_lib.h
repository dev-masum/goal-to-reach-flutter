static int x = 10;

void increament()
{
    static int c = 0;

    c = c + 1;

    printf("%d", c);
}

void introduceMe(int age)
{
    printf("==========\n");
    printf("I am shakil\n");
    printf("my age is %d\n", age);
    printf("============\n");
    printf("\n\n\n");
}
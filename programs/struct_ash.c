#include <stdio.h>

union student
{
    int roll;      // 4 byte
    int a;         // 4 byte
    char section;  // 1 byte
    char section2; // 1 byte
    char section3; // 1 byte
    char section5; // 1 byte
    char section4; // 1 byte
};

void printStruct(union student *student)
{
    printf("roll of ashik is: %d and section is %c\n", student->roll, student->section);
    student->roll = 15;
}

int main()
{

    union student ashik;
    union student mahmud;

    ashik.roll = 10;
    ashik.section = 'A';

    mahmud.roll = 20;
    mahmud.section = 'B';

    printStruct(&ashik);
    printStruct(&mahmud);

    printf("%llu", sizeof(ashik));

    return 0;
}
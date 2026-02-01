#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define struct
struct Person
{
    char name[50];
    int age;
};

// Function to print person info via pointer
void printPerson(struct Person *p)
{
    printf("Name: %s, Age: %d\n", p->name, p->age);
}

// Function to celebrate birthday (modify age via pointer)
void celebrateBirthday(struct Person *p)
{
    p->age += 1;
}

int main()
{
    // 1️⃣ Static allocation of struct
    struct Person shoeb;
    strcpy(shoeb.name, "Shoeb");
    shoeb.age = 25;

    printf("Static struct:\n");
    printPerson(&shoeb);

    celebrateBirthday(&shoeb);
    printf("After birthday:\n");
    printPerson(&shoeb);

    // 2️⃣ Pointer to struct
    struct Person *ptr = &shoeb;
    printf("\nAccess via pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    ptr->age = 30; // Modify via pointer
    strcpy(ptr->name, "Ali");

    printf("After modification via pointer:\n");
    printPerson(ptr);

    // 3️⃣ Dynamic allocation of struct
    struct Person *pDynamic = malloc(sizeof(struct Person));
    if (pDynamic == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(pDynamic->name, "Rahim");
    pDynamic->age = 28;

    printf("\nDynamically allocated struct:\n");
    printPerson(pDynamic);

    celebrateBirthday(pDynamic);
    printf("After birthday (dynamic struct):\n");
    printPerson(pDynamic);

    free(pDynamic); // Always free dynamic memory

    return 0;
}

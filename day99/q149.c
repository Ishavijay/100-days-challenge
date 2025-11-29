//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>   // for malloc()
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    // Dynamically allocate memory for one Student struct
    struct Student *s = (struct Student *) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking inputs
    printf("Enter Student ID: ");
    scanf("%d", &s->id);

    printf("Enter Student Name: ");
    scanf("%s", s->name);

    printf("Enter Student Age: ");
    scanf("%d", &s->age);

    // Printing details
    printf("\n--- Student Details ---\n");
    printf("ID   : %d\n", s->id);
    printf("Name : %s\n", s->name);
    printf("Age  : %d\n", s->age);

    // Free memory
    free(s);

    return 0;
}

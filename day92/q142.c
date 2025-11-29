//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Print all students' details
    printf("\n--- All Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID    : %d\n", s[i].id);
        printf("Name  : %s\n", s[i].name);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}

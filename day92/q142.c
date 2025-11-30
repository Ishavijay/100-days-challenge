//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    int rno;
    char name[50];
    float marks;
};

int main() {
    struct Student s[6];
    int j;
    for (j = 0; j < 6; j++) {
        printf("\nEnter details for Student %d:\n", j + 1);

        printf("Student roll no: ");
        scanf("%d", &s[j].rno);

        printf("Name: ");
        scanf("%s", s[j].name);

        printf("Marks: ");
        scanf("%f", &s[j].marks);
    }

    // Print all students' details
    printf("\n-------------------------Student details ---------------------------\n");
    for (j = 0; j < 6; j++) {
        printf("\nStudent %d:\n", j + 1);
        printf("Student roll no : %d\n", s[j].rno);
        printf("Name  : %s\n", s[j].name);
        printf("Marks : %.2f\n", s[j].marks);
    }
    return 0;}

